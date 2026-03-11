#include <iostream>
#include <cstring>
#include <random>

#include "Sort.h"

void InsertSort(bool ascendent=false);

void QuickSort(bool ascendent=false);

void BubbleSort(bool ascendent=false);

void Print();

int  GetElementsCount();

int  GetElementFromIndex(int index);

/*------------------Constructors----------------------*/

Sort::Sort(int length, int minValue, int maxValue)
{
    Array = new int[length];
    std::random_device rd;

    std::mt19937 gen(rd());

    std::uniform_int_distribution <> distr(minValue, maxValue);

    for(int i = 0; i < length; i++)
    {
        Array[i] = distr(gen);
    }
}

Sort::Sort(char* String)
{
    Array = new int[strlen(String)/2 + 1];
    
    int count = 0;

    while(*String != '\0')
    {
        int number = 0;
        while(*String != ',')
        {
            number = number + ((int)(Array - '0')) * 10;
            *String++;
        }
        *String++;
        Array[count] = number;
        count++;
    }
    this->ArrLength = count;

    delete[] Array;
}
