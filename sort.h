#pragma once
#include <string>

class Sort
{
    protected:
      std::string name;     // Name of the sorting algorithm (e.g. insertion)
      unsigned int size;    // Size of the array to sort
      int *data;            // Pointer to the array to sort
      bool quadratic;       // Used to distinguish fast from slow sorts

      Sort(int *data, unsigned int size, std::string name, bool quadratic);
      ~Sort();

      /// Accessor function for the name of the sort
      std::string Name() { return name ; }

      /// Accessor function for the type of sort
      bool isQuadratic() { return quadratic ; }

      /// pure virtual function (makes Sort an abstract base class)
      virtual void sort() = 0;
};
