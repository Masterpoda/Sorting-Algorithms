#include "heap.h"
#include <iostream>

using namespace std;

void heapify(int * data, int size);

void Heap::sort()
{
    //building heap in linear time
    //treating data as heap
    int end = size-1;

    heapify(data, size);


    //implement by placing item at front
    for(unsigned int i = 0; i < size; i++)
    {
        swap(data[0], data[end]);
        heapify(data, end);
        end--;
    }
}


void heapify(int * data, int size)//sorting with maxheap to eliminate need for reversal
{
    int holder = 0;
    int index = 0;

    //making heap
    for(int i = size/2 -1; i >= 0; i--)
    {
        index = i;

        while(data[index*2+1] > data[index] || (size%2 == 1 && data[index*2 + 2] > data[index]))
        {

            if(data[index*2 + 1] > data[index*2 + 2] && index*2 + 2 <size-1)
            {

                holder = data[index*2 + 1];
                data[index*2 + 1] = data[index];
                data[index] = holder;
                index = index*2 + 1;
            }
            else if(data[index*2 + 1] < data[index*2 + 2] && index*2 + 2 < size-1)
            {
                holder = data[index*2 + 2];
                data[index*2 + 2] = data[index];
                data[index] = holder;
                index = index*2 + 2;
            }
            else
            {
                holder = data[index*2 + 1];
                data[index*2 + 1] = data[index];
                data[index] = holder;
                index = index*2 + 1;
            }
            if(index > size/2 - 1)
                break;
        }
    }
}
