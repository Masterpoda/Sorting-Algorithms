#include "sort.h"
#include <iostream>


using namespace std;

//data = data array
//size = size of array

Sort:: Sort(int *data, unsigned int size, std::string name, bool quadratic)
{
    this->data = data;
    this->size = size;
    this->name = name;
    this->quadratic = quadratic;

}

Sort::~Sort()
{

}
