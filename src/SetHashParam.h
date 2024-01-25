#pragma once
#include "ICommand.h"

class SetHashParam : public ICommand {
public:
    SetHashParam(){};
    ~SetHashParam(){};
    void execute(std::vector<std::string> input, BloomFilter* bf);
};