#include "shell.h"

void Shell::sort()
{
    int gap = size;
    int holder = 0;
    int index;

    while(gap>0)
    {

        for(unsigned int i = 0; i < size; i+=gap)
        {
            index = i;
            while(index > gap-1 && data[index-gap] > data[index])
            {
                holder = data[index];
                data[index] = data[index - gap];
                data[index - gap] = holder;
                index-=gap;
            }
        }
        gap /= 2;
    }
}
