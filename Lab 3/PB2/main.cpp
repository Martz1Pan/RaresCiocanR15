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

    int option; // 1 -> 8
    cout << "Pick an option:\n1)Draw a circle.\n2)";
    /*
    DrawCircle
    FillCircle
    DrawRect
    FillRect
    SetPoint
    DrawLine
    Print
    Clear
    */

    return 0;
}