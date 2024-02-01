#include "Application.h"

// Implementation of the run method in the Application class
void Application::run(std::map<std::string, ICommand*> commands, BloomFilter* bf) {
    while (true) {
        InputOutput* io = new InputOutput();  // Create a new instance of InputOutput
        std::string action;
        action = io->getAction(bf->areParametersSet());  // Get the action input from the user

        // Check if the command key exists in the map
        if (commands.find(action) != commands.end()) {
            try {
                // Execute the command associated with the provided action
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
