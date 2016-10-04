#ifndef __SHELL_H
#define __SHELL_H
#include "sort.h"

class Shell : public Sort
{

    public:

    Shell(int * d, unsigned int s) : Sort (d, s, "Shell", false){};

    void sort();
};
# endif
