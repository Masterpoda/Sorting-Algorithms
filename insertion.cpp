#include "insertion.h"

void Insertion::sort()
{
    int holder = 0;
    int index;
    for(unsigned int i = 0; i < size; i++)
    {
        index = i;
        while(index > 0 && data[index-1] > data[index])
        {
            holder = data[index];
            data[index] = data[index - 1];
            data[index - 1] = holder;
            index--;
        }
    }
}
