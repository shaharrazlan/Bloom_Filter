#include "Application.h"

void Application::run(std::map<std::string, ICommand*> commands, BloomFilter* bf) {

    while (true) {
        InputOutput* io = new InputOutput();
        std::string action;
        action = io->getAction(bf->areParametersSet());

        try{
            commands[action]->execute(io->getData(), bf);
        }
        catch(...) {
            continue;
        }
    }

}
   
    

// Other member functions of the Application class go here