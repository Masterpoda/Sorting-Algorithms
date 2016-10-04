#ifndef __RADIX_H
#define __RADIX_H
#include "sort.h"

class Radix : public Sort
{

    public:

    Radix(int * d, unsigned int s) : Sort (d, s, "Radix", false){};

    void sort();

};
#endif
