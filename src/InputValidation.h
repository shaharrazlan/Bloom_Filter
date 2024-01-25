#ifndef INPUT_VALIDATION_H
#define INPUT_VALIDATION_H

#include <vector>
<<<<<<< Updated upstream
#include <cctype>
#include <string>
#include <iostream>
#include <regex>
=======
#include <string>
#include <iostream>

>>>>>>> Stashed changes

class InputValidation {

public:
<<<<<<< Updated upstream
    InputValidation();
=======
  
>>>>>>> Stashed changes
    bool isANumber(std::vector<std::string> inputVector);
    bool isValidInputNumbers(std::vector<std::string> inputVector);
    std::vector<int> convertToInts(std::vector<std::string> inputVector);
    bool isValidNumberAndUrl(std::vector<std::string> inputVector);
<<<<<<< Updated upstream
    /*bool isValidUrl(std::string input);*/
=======
 
>>>>>>> Stashed changes

};

#endif // INPUT_VALIDATION_H