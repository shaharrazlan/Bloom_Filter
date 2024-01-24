#include "Application.h"

void Application::run() {
    InputOutput io;
    BloomFilter bf;
    UrlManager ud;

    while (true) {
        int userInput = io.getInput();
        if (bf.areParametersSet()) {
                userInput = 2;
        }

        

        switch (userInput) {
            case 1: {
                std::vector<int> data = io.getIntData();
                bf.setBits(data[0]);
                std::vector<int> num_hashFunctions;

                for (int i = 1; i < data.size(); i++) { // Corrected loop condition
                    num_hashFunctions.push_back(data[i]);
                }

                bf.setNumHashFunctions(num_hashFunctions);
                
                break;
            }

            case 2: {
                
                std::vector<std::string> data = io.getData();

                if (data[0] == "1") { // Corrected string comparison
                    bf.addElement(data[1]);
                    ud.addUrl(data[1]);
                } else if (data[0] == "2") { // Corrected string comparison
                    if (bf.containsElement(data[1])) {
                        std::cout << "true" << " ";

                        if (ud.checkUrl(data[1])) {
                            std::cout << "true" << std::endl;
                        } else {
                            std::cout << "false" << std::endl;
                        }
                    } else {
                        std::cout << "false" << std::endl;
                    }
                }

                break;
            }

            default:
                std::cout << "Invalid choice." << std::endl;
        }
    }
}

// Other member functions of the Application class go here