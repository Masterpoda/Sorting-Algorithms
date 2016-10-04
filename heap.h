#ifndef __HEAP_H
#define __HEAP_H
#include "sort.h"

class Heap : public Sort
{

    public:

    Heap(int * d, unsigned int s) : Sort (d, s, "Heap", false){};

    void sort();

};
#endif
