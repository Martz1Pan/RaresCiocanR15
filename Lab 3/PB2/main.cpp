#include <iostream>
#include <string.h>

#include "Canvas.h"


using namespace std;

int main()
{
    int height, width;
    cout << "Width: "; cin >> width;
    cout << "Height: "; cin >> height;

    Canvas myCanvas(width, height);

    char ch;
    cout << "What character would you like to draw with?: ";
    cin >> ch;

    int option ; // 1 -> 7
    cout << "Pick an option:\n1) Draw a circle.\n2) Draaw a filled circle.\n3) Draw a rectangle\n4) Draw a filled rectangle.\n5) Draw a line.\n6) Clear the canvas.\n7) Abort(Pick -1).\n";

    cin >> option;

    int x,y,ray,left,top,right,bottom, x1, y1, x2, y2;
    while(option != -1)
    {
        switch(option)
        {
            case 1:
                cout << "Coordinates of the center of the circle:\nx = ";
                cin >> x;
                cout << "y =  "; cin >> y;
                cout << "Radius of circle: ";
                cin >> ray;
                myCanvas.DrawCircle(x, y, ray, ch);
                myCanvas.Print();
                cout << "\n";
                break;
            case 2:
                cout << "Coordinates of the center of the filled circle:\nx = ";
                cin >> x;
                cout << "y =  "; cin >> y;
                cout << "Radius of circle: ";
                cin >> ray;
                myCanvas.FillCircle(x, y, ray, ch);
                myCanvas.Print();
                cout << "\n";
                break;
            case 3:
                cout << "Coordinates of the rectangle: \nleft = ";
                cin >> left;
                cout << "top = ";
                cin >> top;
                cout << "right = ";
                cin >> right;
                cout << "bottom = ";
                cin >> bottom;
                myCanvas.DrawRect(left, top, right, bottom, ch);
                myCanvas.Print();
                cout << "\n";
                break;
            case 4:
                cout << "Coordinates of the filled rectangle: \nleft = ";
                cin >> left;
                cout << "top = ";
                cin >> top;
                cout << "right = ";
                cin >> right;
                cout << "bottom = ";
                cin >> bottom;
                myCanvas.FillRect(left, top, right, bottom, ch);
                myCanvas.Print();
                cout << "\n";
                break;
            case 5:
                cout << "Coordinates of the first point of the line:\nx1 = ";
                cin >> x1;
                cout << "y1 = ";
                cin >> y1;
                cout <<"Coordinates of the first point of the line:\nx2 = ";
                cin >> x2;
                cout << "y2 = ";
                cin >> y2;
                myCanvas.DrawLine(x1,y1,x2,y2,ch);
                myCanvas.Print();
                cout << "\n";
                break;
            case 6:
                myCanvas.Clear();
                break;
            default:
                if(option < 1 || option > 6)
                    break;
        }
        cout << "What would you like to do next?";
        cout << "\n1) Draw a circle.\n2) Draaw a filled circle.\n3) Draw a rectangle\n4) Draw a filled rectangle.\n5) Draw a line.\n6) Clear the canvas.\n7) Abort(Pick -1).\n";
        cin >> option;
        if(option == -1)
            break;
    }
    
    return 0;
}