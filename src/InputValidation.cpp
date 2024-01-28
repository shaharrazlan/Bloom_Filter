#include "InputValidation.h"



bool InputValidation::isANumber(std::vector<std::string> inputVector) {
    for (const std::string str : inputVector) {
        for (char ch : str) {
            if (!std::isdigit(ch)) {
                return false;
            }
        }
    }
    return true;
}

bool InputValidation::convertToInts(std::vector<std::string> inputVector) {
    int n;
    try {
        std::stoi(inputVector[0]);
        for (int i = 1; i < inputVector.size(); i++) {
            n = std::stoi(inputVector[i]);
            if(n > 2) {
                return false;
            }    
        }
    }
         catch (const std::invalid_argument& e) {
           return false;
        } catch (const std::out_of_range& e) {
            return false;
            // Handle the error or skip this element if necessary
        }
    return true;
}




bool InputValidation::isValidInputNumbers(std::vector<std::string> inputVector) {
   
     // Check if the input is valid according to your criteria
    if (inputVector.size() < 2) {
        return false;
    }
    
    if(!convertToInts(inputVector)){
        return false;

    };
    

    // If all conditions pass, the input is valid
    return true;
}


bool InputValidation::isValidNumberAndUrl(std::vector<std::string> inputVector) {
    if(inputVector.size() != 2) {
        return false;
    }
    if(inputVector[0] != "1" && inputVector[0] != "2"){
        return false;
    }
    return true;
}
