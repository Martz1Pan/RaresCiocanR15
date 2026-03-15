#include <iostream>

#include "Sort.h"

using namespace std;

int main()
{
    int option1;
    cout << "Pick how you want the array to be initialised:\n1) An array with random values.\n2) An array with already initialised values.\n3) An array from an existing vector(you have to give input).\n4) An array built on variadic parameters.\n5) An array from a string.\nYour option: ";
    cin >> option1;
    int option2;
    cout << "\nWhat would you like to do with the array?\n1) Insertion sort.\n2) Quick sort.\n3) Bubble sort.\n4) Print current array.";
    cin >> option2;
    int option3;
    switch(option1)
    {
        case 1:
        {
            int length;
            int minValue, maxValue;
            cout << "Pick array length:"; cin >> length;
            cout << "minimum value:"; cin >> minValue;
            cout << "maximum value:"; cin >> maxValue;
            Sort array(length, minValue, maxValue);

            switch(option2)
            {
                case 1:
                    cout << "Ascending or descending(1 or 2):"; cin >> option3;
                    if(option3 == 1)
                        array.InsertSort(true);
                    else array.InsertSort();
                    array.Print();
                    break;
                case 2:
                    cout << "Ascending or descending(1 or 2):"; cin >> option3;
                    if(option3 == 1)array.QuickSort(0, array.GetElementsCount(), true);
                    else array.QuickSort(0, array.GetElementsCount());
                    array.Print();
                    break;
                case 3:
                    cout << "Ascending or descending(1 or 2):"; cin >> option3;
                    if(option3 == 1)array.BubbleSort(true);
                    else array.BubbleSort();
                    array.Print();
                    break;
                case 4:
                    array.Print();
                    break;
                default: break;
            }
            break;
        }
        case 2:
        {
            Sort array;
            switch(option2)
            {
                case 1:
                    cout << "Ascending or descending(1 or 2):"; cin >> option3;
                    if(option3 == 1)
                        array.InsertSort(true);
                    else array.InsertSort();
                    array.Print();
                    break;
                case 2:
                    cout << "Ascending or descending(1 or 2):"; cin >> option3;
                    if(option3 == 1)array.QuickSort(0, array.GetElementsCount(), true);
                    else array.QuickSort(0, array.GetElementsCount());
                    array.Print();
                    break;
                case 3:
                    cout << "Ascending or descending(1 or 2):"; cin >> option3;
                    if(option3 == 1)array.BubbleSort(true);
                    else array.BubbleSort();
                    array.Print();
                    break;
                case 4:
                    array.Print();
                    break;
                default: break;
            }
            
            break;
        }
        case 3:
        {
            int vector[100], n;
            cout << "pick vector size: "; cin >> n;
            cout << "pick vector values: ";
            for(int i = 0; i < n; i++) cin >> vector[i];
            Sort array(vector, n);

            switch(option2)
            {
                case 1:
                    cout << "Ascending or descending(1 or 2):"; cin >> option3;
                    if(option3 == 1)
                        array.InsertSort(true);
                    else array.InsertSort();
                    array.Print();
                    break;
                case 2:
                    cout << "Ascending or descending(1 or 2):"; cin >> option3;
                    if(option3 == 1)array.QuickSort(0, array.GetElementsCount(), true);
                    else array.QuickSort(0, array.GetElementsCount());
                    array.Print();
                    break;
                case 3:
                    cout << "Ascending or descending(1 or 2):"; cin >> option3;
                    if(option3 == 1)array.BubbleSort(true);
                    else array.BubbleSort();
                    array.Print();
                    break;
                case 4:
                    array.Print();
                    break;
                default: break;
            }
            break;
        }
        case 4:
        {
            int vector[100], n;
            cout << "pick vector size: "; cin >> n;
            cout << "pick vector values: ";
            for(int i = 0; i < n; i++) cin >> vector[i];
            Sort array(n, vector);

            switch(option2)
            {
                case 1:
                    cout << "Ascending or descending(1 or 2):"; cin >> option3;
                    if(option3 == 1)
                        array.InsertSort(true);
                    else array.InsertSort();
                    array.Print();
                    break;
                case 2:
                    cout << "Ascending or descending(1 or 2):"; cin >> option3;
                    if(option3 == 1)array.QuickSort(0, array.GetElementsCount(), true);
                    else array.QuickSort(0, array.GetElementsCount());
                    array.Print();
                    break;
                case 3:
                    cout << "Ascending or descending(1 or 2):"; cin >> option3;
                    if(option3 == 1)array.BubbleSort(true);
                    else array.BubbleSort();
                    array.Print();
                    break;
                case 4:
                    array.Print();
                    break;
                default: break;
            }
            break;
        }
        case 5:
        {
            char string[101];
            cout << "Pick string(numbers must be divided by ',', no ' '): "; cin >> string;
            Sort array(string);

            switch(option2)
            {
                case 1:
                    cout << "Ascending or descending(1 or 2):"; cin >> option3;
                    if(option3 == 1)
                        array.InsertSort(true);
                    else array.InsertSort();
                    array.Print();
                    break;
                case 2:
                    cout << "Ascending or descending(1 or 2):"; cin >> option3;
                    if(option3 == 1)array.QuickSort(0, array.GetElementsCount(), true);
                    else array.QuickSort(0, array.GetElementsCount());
                    array.Print();
                    break;
                case 3:
                    cout << "Ascending or descending(1 or 2):"; cin >> option3;
                    if(option3 == 1)array.BubbleSort(true);
                    else array.BubbleSort();
                    array.Print();
                    break;
                case 4:
                    array.Print();
                    break;
                default: break;
            }
            break;
        }
        default:
        {
            break;
        }
    }

    

    return 0;
}