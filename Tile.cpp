//------------------------------------------------------------------------------
// Tile.cpp
//
// Group: Group 10, study assistant: Daniel Ellmeier
//
// Authors: Peter Buerscher (1530750)
// Jakob Guertl (1530763)
//------------------------------------------------------------------------------
//

#include "Tile.h"

//------------------------------------------------------------------------------
Tile::Tile()
{
}

//------------------------------------------------------------------------------
Tile::Tile(const Tile& orig)
{
}

//------------------------------------------------------------------------------
Tile::~Tile()
{
}

//------------------------------------------------------------------------------
void Tile::setSymbol(char symbol)
{
  symbol_ = symbol;
}

//------------------------------------------------------------------------------
char Tile::getSymbol()
{
  return symbol_;
}
