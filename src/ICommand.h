#pragma once
#include "UrlManager.h"
#include "BloomFilter.h"
#include <string>
#include <vector>

// Abstract base class definition for ICommand
class ICommand {
public:
    // Pure virtual function representing the execute method
    // Takes a vector of strings as input representing commands and a BloomFilter for URL filtering
    virtual void execute(std::vector<std::string> input, BloomFilter* bf) = 0;
    // "= 0" indicates that this method is a pure virtual function and must be overridden by derived classes
};
