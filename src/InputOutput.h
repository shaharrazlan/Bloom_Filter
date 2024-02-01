#ifndef INPUT_OUTPUT_H
#define INPUT_OUTPUT_H

#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <functional>
#include "InputValidation.h"

// Class definition for InputOutput
class InputOutput {
private:
    std::vector<std::string> data;  // Container to store input data
    InputValidation* iv = new InputValidation();  // Instance of InputValidation for input validation

public:
    // Default constructor for InputOutput
    InputOutput(){};

    // Destructor for InputOutput
    ~InputOutput(){
        delete iv;  // Deallocate memory for the InputValidation instance
    };

    // Method to get the action input from the user based on a boolean parameter
    std::string getAction(bool b);

    // Method to extract string elements from an input line
    std::vector<std::string> getStringElements(std::string inputLine);

    // Method to get the stored data
    std::vector<std::string> getData();
};

#endif // INPUT_OUTPUT_H
