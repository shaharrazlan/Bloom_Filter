#ifndef INPUT_OUTPUT_H
#define INPUT_OUTPUT_H

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <functional>
#include "InputValidation.h"

class InputOutput {
private:
<<<<<<< Updated upstream
    std::vector<std::string> data; 

public:
    std::vector<std::string> getStringElements(std::string inputLine);
    int getInput();
    std::vector<std::string> getData();
    void displayOutput(bool isPresent);
    std::vector<int> getIntData();
=======
    std::vector<std::string> data;
    InputValidation* iv = new InputValidation();

public:

    InputOutput(){};
    ~InputOutput(){
        delete iv;
    };

    std::string getAction(bool b); 
    std::vector<std::string> getStringElements(std::string inputLine);
    std::vector<std::string> getData();
  
>>>>>>> Stashed changes
};
#endif // INPUT_OUTPUT_H