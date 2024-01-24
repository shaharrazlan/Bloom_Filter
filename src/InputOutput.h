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

public:
    std::vector<std::string> getStringElements(std::string inputLine);
    int getInput();
    std::vector<std::string> getData();
    void displayOutput(bool isPresent);
    std::vector<int> getIntData();
};
#endif // INPUT_OUTPUT_H