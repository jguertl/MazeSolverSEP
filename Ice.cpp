//------------------------------------------------------------------------------
// Ice.cpp
//
// Group: Group 10, study assistant: Daniel Ellmeier
//
// Authors: Peter Buerscher (1530750)
// Jakob Guertl (1530763)
//------------------------------------------------------------------------------
//

#include "Ice.h"

//------------------------------------------------------------------------------
Ice::Ice()
{
}

//------------------------------------------------------------------------------
Ice::Ice(char symbol, int id, int value) :
  Tile(symbol, id, value)
{
}

//------------------------------------------------------------------------------
Ice::Ice(const Ice& orig)
{
}

//------------------------------------------------------------------------------
Ice::~Ice()
{
}

//------------------------------------------------------------------------------
bool Ice::move(string direction)
{
  return true;
}
