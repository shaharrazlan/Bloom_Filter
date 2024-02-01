#include "InputValidation.h"

// Function to check if a string consists only of numeric characters
bool isNumeric(const std::string& str) {
    for (char c : str) {
        if (!std::isdigit(c)) {
            return false;
        }
    }
    return true;
}

// Function to check if all strings in a vector are numeric
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

// Function to convert vector elements to integers and validate conditions
bool InputValidation::convertToInts(std::vector<std::string> inputVector) {
    int n;

    // Check if the first element is numeric
    if (!isNumeric(inputVector[0])) {
        return false;
    }

    // Loop through the remaining elements and convert to integers
    for (int i = 1; i < inputVector.size(); i++) {
         n = std::stoi(inputVector[i]);

        // Check additional condition for the converted integer
        if(n > 2) {
             return false;
         }    
    }
    
    return true;
 }


// Function to validate input numbers based on specified criteria
bool InputValidation::isValidInputNumbers(std::vector<std::string> inputVector) {
   
    // Check if the first element is "0" or if the vector size is less than 2
    if (inputVector[0] == "0") {
        return false;
    }
    if (inputVector.size() < 2) {
        return false;
    }
    
    if(!convertToInts(inputVector)){
        return false;

    };
    

    // If all conditions pass, the input is considered valid
    return true;
}

// Function to validate a combination of numbers and URLs
bool InputValidation::isValidNumberAndUrl(std::vector<std::string> inputVector) {
    // Check if the vector size is exactly 2 and if the first element is either "1" or "2"
    if(inputVector.size() != 2) {
        return false;
    }
    if(inputVector[0] != "1" && inputVector[0] != "2"){
        return false;
    }
    // If all conditions pass, the input is considered valid
    return true;
}
