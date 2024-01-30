#pragma once
#include "ICommand.h"
#include "UrlManager.h"


class AddUrl : public ICommand {
private:
    UrlManager* manager;

public:
     AddUrl();
    ~AddUrl();

    void execute(std::vector<std::string> input, BloomFilter* bf);
};