#pragma once
#include "ICommand.h"

// Class definition for SetHashParam, derived from ICommand
class SetHashParam : public ICommand {
public:

// Constructor for SetHashParam
    SetHashParam(){};

// Destructor for SetHashParam
    ~SetHashParam(){};

// Implementation of the execute function from the ICommand interface
    void execute(std::vector<std::string> input, BloomFilter* bf);
};
