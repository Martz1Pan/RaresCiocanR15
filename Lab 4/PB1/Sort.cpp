#include <iostream>
#include <cstring>
#include <random>

#include "Sort.h"

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

    this->ArrLength = length;
}

Sort::Sort() : ArrLength(5), Array2{12,32,73,2,51}
{

    for(int i = 0; i < ArrLength; i++)
        this->Array[i] = Array2[i];

    this->ArrLength = ArrLength;
}

Sort::Sort(int vec[], int ArrLength)
{
    Array = new int[ArrLength];

    for(int i = 0; i < ArrLength; i++)
        Array[i] = vec[i];
    
    this->ArrLength = ArrLength;

    delete[] Array;
}

#include <stdarg.h>

Sort::Sort(int ArrLength, ...)
{
    va_list list;
    va_start(list, ArrLength);
    Array = new int[ArrLength];

    for(int i = 0; i < ArrLength; i++)
        Array[i] = va_arg(list, int);
    va_end(list);

    this->ArrLength = ArrLength;

    delete[] Array;
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
            number = number + ((int)(*String - '0')) * 10;
            *String++;
        }
        *String++;
        Array[count] = number;
        count++;
    }
    this->ArrLength = count;

    delete[] Array;
}

/*-------------Sort Functions---------------*/

void Sort::InsertSort(bool ascendent)
{
    for (int i = 1; i < ArrLength; ++i) {
        int key = Array[i];
        int j = i - 1;

        while (j >= 0 && ascendent == false?Array[j] < key : Array[j] > key) {
            Array[j + 1] = Array[j];
            j = j - 1;
        }
        Array[j + 1] = key;
    }
}

void Sort::QuickSort(int left, int right, bool ascendent)
{
    if(left < right)
	{
		int m = (left + right) / 2;
		int aux = Array[left];
		Array[left] = Array[m];
		Array[m] = aux;
		int i = left , j = right, d = 0;
		while(i < j)
		{
			if(ascendent == false?Array[i] < Array[j] : Array[i] > Array[j])
			{
				aux = Array[i]; 
				Array[i] = Array[j];
				Array[j] = aux;
				d = 1 - d;
			}
			i += d;
			j -= 1 - d;
		}
		QuickSort(left , i - 1);
		QuickSort(i + 1 , right);
	}
}

void Sort::BubbleSort(bool ascendent)
{
    bool swapped = false;

    for(int i = 0; i < ArrLength - 1; i++)
    {

        for(int j = 0; j < ArrLength - i - 1; i++)
        {
            if(ascendent == false? Array[j] < Array[j + 1] : Array[j] > Array[j + 1])
            {
                int aux = Array[j];
                Array[j] = Array[j+1];
                Array[j+1] = aux;
                swapped = true;
            }
        }
        if(!swapped)
            break;
    }
}

void Sort::Print()
{
    for(int i = 0; i < ArrLength; i++)
        std::cout << Array[i] << " ";
    std::cout << "\n";
}

int Sort::GetElementsCount()
{
    return this->ArrLength;
}

int  Sort::GetElementFromIndex(int index)
{
    return this->Array[index];
}