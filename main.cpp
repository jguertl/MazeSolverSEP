//------------------------------------------------------------------------------
// main.cpp
//
// Group: Group 10, study assistant: Daniel Ellmeier
//
// Authors: Armin Adam (1430748)
// Peter Buerscher (1530750)
// Jakob Guertl (1530763)
//------------------------------------------------------------------------------
//

#include <iostream>
#include "WrongUsageException.h"

//------------------------------------------------------------------------------
// main function
// entry point for execution
// @param argc argument count
// @param **argv argument values
// @return return value for the OS
//
int main(int argc, char** argv) {
    throw WrongUsageException();
    std::cout << "Hello, World!\n";
    return 0;
}
