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
  

};
#endif // INPUT_OUTPUT_H
