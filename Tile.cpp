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
Tile::Tile() : symbol_(0), id_(0), value_(0)
{
}

//------------------------------------------------------------------------------
Tile::Tile(char symbol, int id, int value)
{
  setSymbol(symbol);
  setId(id);
  setValue(value);
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

//------------------------------------------------------------------------------
void Tile::setValue(char value)
{
  value_ = value;
}

//------------------------------------------------------------------------------
int Tile::getValue()
{
  return value_;
}

//------------------------------------------------------------------------------
void Tile::setId(char id)
{
  id_ = id;
}

//------------------------------------------------------------------------------
int Tile::getId()
{
  return id_;
}
