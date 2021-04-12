#include <iostream>

int main() {
    int var = 20;                 // Actual variable declaration.
    int *ip                       // Pointer variable - just like a normal variable, but instead of storing,
                                  // a string or int, it stores a pointer to another variable.
    ip = &var;                    // The &var will return the address of the variable (instead of the value),
                                  // setting ip (of datatype adress) equal to the adress of var.

   std::cout << "Value of var variable: ";
   std::cout << var << std::endl;

   // print the address stored in ip pointer variable
   std::cout << "Address stored in ip variable: ";
   std::cout << ip << std::endl;

   // access the value at the address available in pointer
   std::cout << "Value of *ip variable: ";
   std::cout << *ip << std::endl;
}
