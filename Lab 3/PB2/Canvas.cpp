#include <iostream>
#include <cstdlib>

#include "Canvas.h"

Canvas::Canvas(int width, int height)
{
    this->width = width;
    this->height = height;

    grid = new char*[height];

    for(int i = 0; i < height; i++)
    {
        grid[i] = new char[width];

        for(int j = 0; j < width; j++)
            grid[i][j] = ' ';
    }
}

void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
    int current_x = 0;
    int current_y = ray;
    int decision = 3 - 2 * ray;

    while(current_x <= current_y)
    {
         SetPoint(x + current_x, y + current_y,ch);
         SetPoint(x - current_x, y + current_y,ch);
         SetPoint(x + current_x, y - current_y,ch);
         SetPoint(x - current_x, y - current_y,ch);
         SetPoint(x + current_y, y + current_x,ch);
         SetPoint(x - current_y, y + current_x,ch);
         SetPoint(x + current_y, y - current_x,ch);
         SetPoint(x - current_y, y - current_x,ch);
         if(decision < 0)
         {
            decision = decision + (4 * current_x + 6);
            
         }
         else
         {
            decision = decision + 10 + 4 * (current_x - current_y);
            current_y--;
         }
        current_x++;
    }
}

void Canvas::FillCircle(int x, int y, int ray, char ch)
{
    int curr_x = 0;
    int curr_y = ray;
    int dec = 3 - 2 * ray;

    while(curr_x <= curr_y)
    {
        for(int i = x - curr_x; i < x + curr_x; i++)
        {
            SetPoint(i, y + curr_y, ch);
            SetPoint(i, y - curr_y, ch);
        }

        for(int i = x - curr_y; i < x + curr_y; i++)
        {
            SetPoint(i, y + curr_x, ch);
            SetPoint(i, y - curr_x, ch);
        }

        if(dec < 0)
        {
            dec = dec + (4 * curr_x + 6);   
        }
        else
        {
            dec = dec + 10 + 4 * (curr_x - curr_y);
            curr_y--;
        }
        curr_x++;
    }
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
    for(int i = bottom; i <= top; i ++)
        grid[i][left] = grid[i][right] = ch;
        
    for(int i = left; i <= right; i ++)
        grid[top][i] = grid[bottom][i] = ch;
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
    for(int i = bottom; i <= top; i ++)
        for(int j = left; j <= right; j ++)
            grid[i][j] = ch;
}

void Canvas::SetPoint(int x, int y, char ch)
{
    int grid_x = x + (width / 2);
    int grid_y = y + (height / 2);

    if(grid_x >= 0 && grid_x < width && grid_y >= 0 && grid_y < height)
        grid[grid_y][grid_x] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
    int dx = x2 - x1 > 0? x2 - x1: -x2 + x1;
    int dy = y2 - y1 > 0? y2 - y1: -y2 + y1;

    int sx = x1 < x2? 1 : -1;
    int sy = y1 < y2? 1 : -1;

    int err = dx - dy;

    while(true)
    {
        grid[y1][x1] = ch;

        if(x1 == x2 && y1 == y2)
            break;

        int e2 = 2 * err;

        if(e2 > -dy)
        {
            err -= dy;
            x1 += sx;
        }

        if(e2 < dx)
        {
            err += dx;
            y1 += sy;
        }
    }
}

void Canvas::Print()
{
    for(int x = 0; x < height; x++)
    {
        for(int y = 0; y < width; y++)
            std::cout << grid[x][y] << " "; 
        std::cout << "\n";    
    }

}

void Canvas::Clear()
{
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
            grid[i][j] = ' ';
    }
}

Canvas::~Canvas()
{
    for(int i = 0; i < height; i ++)
        delete[] grid[i];
    delete[] grid;
}