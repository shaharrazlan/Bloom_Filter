#pragma once

#include "ICommand.h"

// Class definition for the CheckUrl command, which is derived from ICommand
class CheckUrl : public ICommand {
private:
    UrlManager* manager;  // Pointer to an instance of UrlManager for managing URLs

public:
    // Constructor for CheckUrl
    CheckUrl();

    // Destructor for CheckUrl
    ~CheckUrl();

    // Implementation of the execute method from ICommand
    // Takes a vector of strings as input representing URLs and a BloomFilter for URL filtering
    void execute(std::vector<std::string> input, BloomFilter* bf);
};
