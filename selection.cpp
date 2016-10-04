#include "selection.h"

void Selection::sort()
{
    int holder = 0;
    int mindex;
    for(unsigned int i =0; i<size; i++)
    {
        mindex = i;
        for(unsigned int j = i; j<size; j++)
        {
            if(data[mindex] > data[j])
                mindex = j;
        }
    holder = data[mindex];
    data[mindex] = data[i];
    data[i] = holder;
    }
}
