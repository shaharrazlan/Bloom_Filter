#pragma once
#include "UrlManager.h"
#include "BloomFilter.h"
#include <string>
#include <vector>

class ICommand {

     public: virtual void execute(std::vector<std::string> input, BloomFilter* bf) = 0; 

};