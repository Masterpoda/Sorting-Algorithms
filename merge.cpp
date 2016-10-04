#include "merge.h"

void mergeSort(int data[], int iBegin, int iEnd, int holder[]);
void merge(int data[], int iBegin, int middle, int iEnd, int holder[]);
void copyIn(int data[], int iBegin, int iEnd, int holder[]);

void Merge::sort()
{
    int * holder = (int *)malloc(sizeof(int)*size);
    mergeSort(data, 0, size, holder);

    delete [] holder;
}

void mergeSort(int data[], int iBegin, int iEnd, int holder[])
{
    if(iEnd - iBegin < 2)
        return;
    int middle = (iEnd + iBegin)/2;
    mergeSort(data, iBegin, middle, holder);
    mergeSort(data, middle, iEnd, holder);
    merge(data, iBegin, middle, iEnd, holder);
    copyIn(data, iBegin, iEnd, holder);
}

void merge(int data[], int iBegin, int middle, int iEnd, int holder[])
{
    int i = iBegin, j = middle;

    for(int k = iBegin; k < iEnd; k++)
    {
        if(i < middle && (j >= iEnd || data[i] <= data[j]))
        {
            holder[k]= data[i];
            i = i + 1;
        }
        else
        {
            holder[k] = data[j];
            j = j + 1;
        }
    }
}

void copyIn(int data[], int iBegin, int iEnd, int holder[])
{
    for (int i = iBegin; i < iEnd; i++)
    {
        data[i] = holder[i];
    }
}
