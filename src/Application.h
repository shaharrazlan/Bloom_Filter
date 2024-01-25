#pragma once
#include "BloomFilter.h"
#include "InputOutput.h" // Assuming you have a header file for InputOutput
#include "UrlManager.h"
#include "ICommand.h"
#include <map>

class Application {

public:
    Application(){};
    void run(std::map<std::string, ICommand*> commands, BloomFilter* bf);
};
