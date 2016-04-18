//------------------------------------------------------------------------------
// LoadCommand.h
//
// Group: Group 10, study assistant: Daniel Ellmeier
//
// Authors: Peter Buerscher (1530750)
// Jakob Guertl (1530763)
//------------------------------------------------------------------------------
//

#ifndef LOADCOMMAND_H_INCLUDED
#define LOADCOMMAND_H_INCLUDED

#include <string>
#include <vector>
#include "Command.h"

using std::string;
using std::vector;

class LoadCommand:Command
{
  public:
    
    //--------------------------------------------------------------------------
    // Constructor
    LoadCommand(string name);
    
    //--------------------------------------------------------------------------
    // Executes the command.
    // @param board The board where action should be performed on
    // @param params Possible parameters neede for the execution
    // @return Integer representing the success of the action
    int execute(Game& board, vector<string>& params);
};

#endif //LOADCOMMAND_H_INCLUDED