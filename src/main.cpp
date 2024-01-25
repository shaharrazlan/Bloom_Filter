#include "Application.h"
#include "BloomFilter.h"
#include "ICommands.h"
#include "AddUrl.h"
#include "CheckUrl.h"
#include "SetHashParam.h"
#include <map>


int main() {
    BloomFilter* bf = new BloomFilter();
    std::map<std::string, ICommand*> commands;

    ICommand* addUrl = new AddUrl();
    commands["1"] = addUrl;

    ICommand* checkUrl = new CheckUrl();
    commands["2"] = checkUrl;

    ICommand* setParam = new SetHashParam();
    commands["3"] = setParam;


    Application app;
    app.run(commands, bf);

    delete addUrl;
    delete checkUrl;
    delete setParam;

    return 0;
}