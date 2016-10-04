#ifndef __MERGE_H
#define __MERGE_H
#include "sort.h"

class Merge : public Sort
{

    public:

    Merge(int * d, unsigned int s) : Sort (d, s, "Merge", false){};

    void sort();
};
#endif
