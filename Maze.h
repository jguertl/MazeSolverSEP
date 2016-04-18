//------------------------------------------------------------------------------
// Maze.h
//
// Group: Group 10, study assistant: Daniel Ellmeier
//
// Authors: Peter Buerscher (1530750)
// Jakob Guertl (1530763)
//------------------------------------------------------------------------------
//

#ifndef MAZE_H_INCLUDED
#define MAZE_H_INCLUDED
#include <string>
#include <vector>

using std::string;
using std::vector;

//----------------------------------------------------------------------------
// Style Maze
// class to represent a maze
//
class Maze
{
  private:

    //--------------------------------------------------------------------------
    // TODO
    //
    string moves_;

    //--------------------------------------------------------------------------
    // Current amount of steps
    //
    int steps_;

    //--------------------------------------------------------------------------
    // Current Counter
    //
    int counter_;

    //--------------------------------------------------------------------------
    // Collection of tiles
    //
    vector< vector<char> > tiles_;



  public:

    //--------------------------------------------------------------------------
    // Constructor
    //
    Maze();

    //--------------------------------------------------------------------------
    // Destructor
    //
    ~Maze();

    //--------------------------------------------------------------------------
    // Load Method
    // TODO description
    // @param path file path to load
    //
    void loadMaze(const string& path);

    //--------------------------------------------------------------------------
    // Save Method
    // TODO description
    // @param path file path to save
    //
    void saveMaze(const string& path);

    //--------------------------------------------------------------------------
    // Show Maze
    // TODO description
    //
    void showMaze();

    //--------------------------------------------------------------------------
    // Show More
    // TODO description
    //
    void showMore();
};

#endif //MAZE_H_INCLUDED

