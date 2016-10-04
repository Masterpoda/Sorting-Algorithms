#ifndef __SELECTION_H
#define __SELECTION_H
#include "sort.h"

class Selection : public Sort
{

    public:

    Selection(int * d, unsigned int s):Sort (d, s, "Selection", true){};

    void sort();

};
#endif
