#ifndef __QUICK_H
#define __QUICK_H
#include "sort.h"

class Quick : public Sort
{

    public:

    Quick(int * d, unsigned int s) : Sort (d, s, "Quick", false){};

    void sort();

};
# endif
