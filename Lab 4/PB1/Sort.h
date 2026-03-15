#ifndef SORT_H
#define SORT_H
class Sort
{
    int* Array;
    int Array2[101];
    int ArrLength;

public:
    // add constuctors
    Sort(int length, int minValue, int maxValue);
    Sort();
    Sort(int vec[], int ArrLength);
    Sort(int ArrLength, ...);
    Sort(char* String);
    // Sorting alorithms
    void InsertSort(bool ascendent=false);
    void QuickSort(int left, int right, bool ascendent=false);
    void BubbleSort(bool ascendent=false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
};
#endif