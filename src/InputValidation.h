#ifndef INPUT_VALIDATION_H
#define INPUT_VALIDATION_H

#include <vector>
#include <cctype>
#include <string>
#include <iostream>
#include <regex>

class InputValidation {

public:
    InputValidation();
    bool isANumber(std::vector<std::string> inputVector);
    bool isValidInputNumbers(std::vector<std::string> inputVector);
    std::vector<int> convertToInts(std::vector<std::string> inputVector);
    bool isValidNumberAndUrl(std::vector<std::string> inputVector);
    /*bool isValidUrl(std::string input);*/

};

#endif // INPUT_VALIDATION_H