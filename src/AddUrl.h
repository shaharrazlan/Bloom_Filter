#pragma once
#include "ICommand.h"
#include "UrlManager.h"

// Class definition for the AddUrl command, which is derived from ICommand
class AddUrl : public ICommand {
private:
    UrlManager* manager;  // Pointer to an instance of UrlManager for managing URLs

public:
    // Constructor for AddUrl
    AddUrl();

    // Destructor for AddUrl
    ~AddUrl();

    // Implementation of the execute method from ICommand
    // Takes a vector of strings as input representing URLs and a BloomFilter for URL filtering
    void execute(std::vector<std::string> input, BloomFilter* bf);
};
