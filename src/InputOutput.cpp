#include "InputOutput.h"

// Method to extract string elements from an input line
std::vector<std::string> InputOutput::getStringElements(std::string inputLine) {
    std::vector<std::string> result;
    std::istringstream iss(inputLine);
    std::string token;

    while (iss >> token) {
        // Remove spaces from the token
        token.erase(std::remove(token.begin(), token.end(), ' '), token.end());
        result.push_back(token);
    }

    return result;
}

// Method to get the stored data
std::vector<std::string> InputOutput::getData() {
    return data;
}

// Method to get the action input from the user based on a boolean parameter
std::string InputOutput::getAction(bool b) {
    std::string userInput;
    std::cin.clear();
    std::getline(std::cin, userInput);
    std::vector<std::string> inputVec = getStringElements(userInput);
    this->data = inputVec;

    if (b) {
        // Check if the input is a valid number and URL combination
        if (iv->isValidNumberAndUrl(inputVec)) {
            return inputVec[0];
        } else {
            return "0";  // Indicate an invalid input
        }
    } else if (iv->isValidInputNumbers(inputVec)) {
        return "3";  // Indicate a valid numeric input
    } else {
        return "0";  // Indicate an invalid input
    }
}
