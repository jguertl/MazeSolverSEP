//------------------------------------------------------------------------------
// Game.h
//
// Group: Group 10, study assistant: Daniel Ellmeier
//
// Authors: Peter Buerscher (1530750)
// Jakob Guertl (1530763)
//------------------------------------------------------------------------------
//

#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include <string>
#include <iostream>
#include "Maze.h"
#include "Player.h"

using std::string;
using std::vector;

//----------------------------------------------------------------------------
// Game Class
// Class to represent a whole game
//
class Game {
  private:
    bool running_;
  public:

    //--------------------------------------------------------------------------
    // Constructor
    //
    Game();

    //--------------------------------------------------------------------------
    // Constructor
    // @param loadfile Path to load
    // @param savefile Path to save
    //
    Game(string loadfile, string savefile);

    //--------------------------------------------------------------------------
    // Copy Constructor
    // Makes a copy of another Game Object.
    // @param orig Original to copy.
    //
    Game(const Game& orig);

    //--------------------------------------------------------------------------
    // Destructor
    //
    virtual ~Game();

    //--------------------------------------------------------------------------
    // TODO wirklich Public?
    //
    Maze maze_;

    //--------------------------------------------------------------------------
    // TODO wirklich Public?
    //
    Player player_;

    //--------------------------------------------------------------------------
    // Start Method
    //Starts the game
    //
    void startGame();

    //--------------------------------------------------------------------------
    // Check Method
    // TODO description
    // @param moves Moves to check
    // @return Returns result of the check operation.
    //

    bool checkMoves(string moves);

    int showMaze();

    //--------------------------------------------------------------------------
    // Save Method
    // Saves the current maze
    //
    int saveMaze(string filename);

    //--------------------------------------------------------------------------
    // Load Method
    // Loads the current maze
    //
    int loadMaze(string filename);

    //--------------------------------------------------------------------------
    // Move Method
    // Move the player in the given direction
    //
    int movePlayer(string direction);
  
    //--------------------------------------------------------------------------
    // Fast Move Method
    // Move the player in the given direction
    //
    int fastMovePlayer(vector<string> directions);
  
    //--------------------------------------------------------------------------
    // Reset Method
    // Resets the game
    //
    int reset();

};

#endif //GAME_H_INCLUDED

