#pragma once

#include "ICommand.h"


class CheckUrl : public ICommand {
private:
    UrlManager* manager;

public:
    CheckUrl();
    ~CheckUrl();

    void execute(std::vector<std::string> input, BloomFilter* bf);
};