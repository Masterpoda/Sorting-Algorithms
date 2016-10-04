#include "quick.h"

void quickSort(int data[], int left, int right);

void Quick::sort()
{
    quickSort(data, 0, size-1);
}

void quickSort(int data[], int left, int right)
{
    int i = left, j = right;
    int temp;
    int pivot = data[(i+j)/2];

    while(i <= j)
    {
        while(data[i] < pivot)
            i++;
        while(data[j] > pivot)
            j--;
        if(i <= j)
        {
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
            i++;
            j--;
        }
    }

    if(left < j)
        quickSort(data, left, j);
    if(i < right)
        quickSort(data, i, right);
}
