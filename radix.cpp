#include "radix.h"
#include <cmath> //pow for Radix
#include <queue> //holders for radix

using namespace std;

void Radix::sort()
{
    int divisor, index, qSize;
    bool incomplete = true;
    queue<int> holder[10];

    for (int digit = 0; incomplete; digit++)
    {
        incomplete = false;
        divisor = pow(10,digit);

        for(unsigned int i = 0; i <size; i++)
        {
            if(data[i]/divisor > 0)
                incomplete = true;
            holder[(data[i]/divisor)%10].push(data[i]);
        }

        index = 0;

        for(unsigned int j = 0; j < size; j++)
        {
            qSize = holder[j].size();

            for(int k = 0; k < qSize; k++)
            {
                data[index] = holder[j].front();
                holder[j].pop();
                index++;
            }
        }
    }
}
