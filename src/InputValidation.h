#ifndef INPUT_VALIDATION_H
#define INPUT_VALIDATION_H

#include <vector>
#include <cctype>
#include <string>
#include <iostream>
#include <regex>

// Class definition for InputValidation
class InputValidation {

public:

    // Function to check if all elements in the vector are numbers
    bool isANumber(std::vector<std::string> inputVector);

    // Function to check if all elements in the vector are valid input numbers
    bool isValidInputNumbers(std::vector<std::string> inputVector);

    // Function to convert vector elements to integers
    bool convertToInts(std::vector<std::string> inputVector);

    // Function to check if input consists of a valid combination of numbers and URLs
    bool isValidNumberAndUrl(std::vector<std::string> inputVector);
 

};

// End of header guard
#endif // INPUT_VALIDATION_H
