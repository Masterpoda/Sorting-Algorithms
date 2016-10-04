#ifndef __INSERTION_H
#define __INSERTION_H
#include <string>
#include "sort.h"

class Insertion : public Sort
{

    public:

    Insertion(int * d, unsigned int s): Sort (d, s, "Insertion", true){};

    void sort();
};
#endif
