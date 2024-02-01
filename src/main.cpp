#include "Application.h"
#include "BloomFilter.h"
#include "ICommand.h"
#include "AddUrl.h"
#include "CheckUrl.h"
#include "SetHashParam.h"
#include <map>


int main() {
    
    // Creating a BloomFilter object
    BloomFilter* bf = new BloomFilter();
    
    // Creating a map to store commands with corresponding strings
    std::map<std::string, ICommand*> commands;

    // Creating an AddUrl command object and adding it to the commands
    ICommand* addUrl = new AddUrl();
    commands["1"] = addUrl;

    // Creating an CheckUrl command object and adding it to the commands
    ICommand* checkUrl = new CheckUrl();
    commands["2"] = checkUrl;

    // Creating an SetHashParam command object and adding it to the commands
    ICommand* setParam = new SetHashParam();
    commands["3"] = setParam;

    // Creating an Application object
    Application app;

    // Running the application with the commands map and BloomFilter
    app.run(commands, bf);

     // Deleting command objects to free up memory
    delete addUrl;
    delete checkUrl;
    delete setParam;

    // Returning 0 to indicate successful execution
    return 0;
}
