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

std::vector<int> InputValidation::convertToInts(std::vector<std::string> inputVector) {
    std::vector<int> result;

    for (std::string str : inputVector) {
        try {
            result.push_back(std::stoi(str));
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error converting string to double: " << e.what() << std::endl;
            // Handle the error or skip this element if necessary
        } catch (const std::out_of_range& e) {
            std::cerr << "Error converting string to double: " << e.what() << std::endl;
            // Handle the error or skip this element if necessary
        }
    }

    return result;
}


bool InputValidation::isValidInputNumbers(std::vector<std::string> inputVector) {
   
     // Check if the input is valid according to your criteria
    if (inputVector.size() < 2) {
        return false;
    }
    
    std::vector<int> intVector = convertToInts(inputVector);
    

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
