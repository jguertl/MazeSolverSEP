//------------------------------------------------------------------------------
// ShowMoreCommand.h
//
// Group: Group 10, study assistant: Daniel Ellmeier
//
// Authors: Peter Buerscher (1530750)
// Jakob Guertl (1530763)
//------------------------------------------------------------------------------
//

#ifndef SHOWMORECOMMAND_H_INCLUDED
#define SHOWMORECOMMAND_H_INCLUDED

#include <string>
#include <vector>
#include "Command.h"
#include "Game.h"

using std::string;
using std::vector;

//----------------------------------------------------------------------------
// Show More Command Class
// Class which executes a show more instruction
//
class ShowMoreCommand : Command
{
  public:

    //--------------------------------------------------------------------------
    // Constructor
    ShowMoreCommand(string name);

    //--------------------------------------------------------------------------
    // Executes the command.
    // @param board The board where action should be performed on
    // @param params Possible parameters needed for the execution
    // @return Integer representing the success of the action
    int execute(Game& board, vector<string>& params);
};

#endif //SHOWMORECOMMAND_H_INCLUDED