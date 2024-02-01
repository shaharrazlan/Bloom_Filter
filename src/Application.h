#pragma once
#include "BloomFilter.h"
#include "InputOutput.h" // Assuming you have a header file for InputOutput
#include "UrlManager.h"
#include "ICommand.h"
#include <map>

// Class definition for the Application class
class Application {

public:
    // Default constructor for the Application class
    Application(){};

    // Method to run the application, taking a map of commands and a BloomFilter as parameters
    void run(std::map<std::string, ICommand*> commands, BloomFilter* bf);
};
