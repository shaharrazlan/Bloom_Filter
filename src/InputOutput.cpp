#include "InputOutput.h"


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



int InputOutput::getInput() {
    std::string userInput;
    std::cin.clear();
    std::getline(std::cin, userInput);
    std::vector<std::string> inputVec = getStringElements(userInput);
    this->data = inputVec;
    InputValidation validInput;
    
    if (validInput.isANumber(inputVec)) {
        if (validInput.isValidInputNumbers(inputVec)) {
            return 1;
        } else {
            return 0;
        }
    } else if (validInput.isValidNumberAndUrl(inputVec)) {
        return 2;
    } else {
       return 0;
    }
}

std::vector<std::string> InputOutput::getData()
{
    return this->data;
}

std::vector<int> InputOutput::getIntData()
{
    std::vector<int> intVec;
    for (const std::string str : this->data) {
        intVec.push_back(std::stoi(str));
    }
    return intVec;
}
    
 


void InputOutput::displayOutput(bool isPresent) {
    if (isPresent) {
        std::cout << "Element is present in the Bloom Filter." << std::endl;
    } else {
        std::cout << "Element is not present in the Bloom Filter." << std::endl;
    }
}

