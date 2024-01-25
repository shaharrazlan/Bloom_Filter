#ifndef INPUT_VALIDATION_H
#define INPUT_VALIDATION_H

#include <vector>
#include <string>
#include <iostream>


class InputValidation {

public:
  
    bool isANumber(std::vector<std::string> inputVector);
    bool isValidInputNumbers(std::vector<std::string> inputVector);
    std::vector<int> convertToInts(std::vector<std::string> inputVector);
    bool isValidNumberAndUrl(std::vector<std::string> inputVector);
 

};

#endif // INPUT_VALIDATION_H
