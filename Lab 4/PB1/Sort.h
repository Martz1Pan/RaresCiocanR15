#ifndef SORT_H
#define SORT_H
class Sort
{
    int* Array;
    int ArrLength;

public:
    // add constuctors
    Sort(int length, int minValue, int maxValue);
    Sort(int* Array): ArrLength(5) {}
    
    Sort(char* String);

    void InsertSort(bool ascendent=false);
    void QuickSort(bool ascendent=false);
    void BubbleSort(bool ascendent=false);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
};
#endif SORT_H