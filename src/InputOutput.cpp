#include "InputOutput.h"

<<<<<<< Updated upstream

=======
>>>>>>> Stashed changes
std::vector<std::string> InputOutput::getStringElements(std::string inputLine) {
    std::vector<std::string> result;
    std::istringstream iss(inputLine);
    std::string token;

    while (iss >> token) {
<<<<<<< Updated upstream
        // Remove spaces from the token
        token.erase(std::remove(token.begin(), token.end(), ' '), token.end());
        result.push_back(token);
=======
        // Remove spaces from the token without using std::remove
        std::string cleanedToken;
        for (char c : token) {
            if (!std::isspace(c)) {
                cleanedToken += c;
            }
        }
        result.push_back(cleanedToken);
>>>>>>> Stashed changes
    }

    return result;
}



<<<<<<< Updated upstream
int InputOutput::getInput() {
=======

std::string InputOutput::getAction(bool b) {
>>>>>>> Stashed changes
    std::string userInput;
    std::cin.clear();
    std::getline(std::cin, userInput);
    std::vector<std::string> inputVec = getStringElements(userInput);
    this->data = inputVec;
<<<<<<< Updated upstream
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
=======
   
    if(b) {
        if (iv->isValidNumberAndUrl(inputVec)) {
                return inputVec[0];
            }
        }
    else if(iv->isValidInputNumbers(inputVec)) {
        return "3";
    }
}
     




>>>>>>> Stashed changes

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
    
 


<<<<<<< Updated upstream
void InputOutput::displayOutput(bool isPresent) {
    if (isPresent) {
        std::cout << "Element is present in the Bloom Filter." << std::endl;
    } else {
        std::cout << "Element is not present in the Bloom Filter." << std::endl;
    }
}

=======
>>>>>>> Stashed changes
