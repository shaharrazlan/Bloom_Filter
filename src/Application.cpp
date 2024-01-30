#include "Application.h"

void Application::run(std::map<std::string, ICommand*> commands, BloomFilter* bf) {
    while (true) {
        InputOutput* io = new InputOutput();
        std::string action;
        action = io->getAction(bf->areParametersSet());

        // Check if the command key exists in the map
        if (commands.find(action) != commands.end()) {
            try {
                commands[action]->execute(io->getData(), bf);
            } catch (...) {
                // Handle any exceptions thrown during command execution
                continue;
            }
        } else {
            // Handle the case where the command key is not recognized
            continue;
        }
    }
}

    

// Other member functions of the Application class go here