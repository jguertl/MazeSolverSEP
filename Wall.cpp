//------------------------------------------------------------------------------
// Wall.cpp
//
// Group: Group 10, study assistant: Daniel Ellmeier
//
// Authors: Peter Buerscher (1530750)
// Jakob Guertl (1530763)
//------------------------------------------------------------------------------
//

#include "Wall.h"

//------------------------------------------------------------------------------
Wall::Wall()
{
}

//------------------------------------------------------------------------------
Wall::Wall(char symbol, int id, int value) :
  Tile(symbol, id, value)
{
}

//------------------------------------------------------------------------------
Wall::Wall(const Wall& orig)
{
}

//------------------------------------------------------------------------------
Wall::~Wall()
{
}

//------------------------------------------------------------------------------
bool Wall::move(string direction)
{
  return false;
}
