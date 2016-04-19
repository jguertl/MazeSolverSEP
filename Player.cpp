//------------------------------------------------------------------------------
// Player.cpp
//
// Group: Group 10, study assistant: Daniel Ellmeier
//
// Authors: Peter Buerscher (1530750)
// Jakob Guertl (1530763)
//------------------------------------------------------------------------------
//

#include "Player.h"

//------------------------------------------------------------------------------
Player::Player() : x_(1), y_(1)
{
}

//------------------------------------------------------------------------------
Player::Player(int position_x, int position_y)
{
  x_=position_x;
  y_=position_y;
  std::cout << "Const. Player: " << position_x << "  " << position_y << std::endl;
}

//------------------------------------------------------------------------------
Player::Player(const Player& orig)
{
}

//------------------------------------------------------------------------------
Player::~Player()
{
}

//------------------------------------------------------------------------------
void Player::move(string direction)
{

}

//------------------------------------------------------------------------------
void Player::fastMove(string moves)
{

}

//------------------------------------------------------------------------------
void Player::setTile(Tile* tile)
{
  tile_=tile;
}

//------------------------------------------------------------------------------
Tile* Player::getTile()
{
  return tile_;
}

//------------------------------------------------------------------------------
void Player::setX(int x)
{
  x_=x;
}

//------------------------------------------------------------------------------
int Player::getX()
{
  return x_;
}

//------------------------------------------------------------------------------
void Player::setY(int y)
{
  y_=y;
}

//------------------------------------------------------------------------------
int Player::getY()
{
  return y_;
}
