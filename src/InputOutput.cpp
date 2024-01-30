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

 std::vector<std::string>  InputOutput::getData() {
    return data;
 }


std::string InputOutput::getAction(bool b) {
    std::string userInput;
    std::cin.clear();
    std::getline(std::cin, userInput);
    std::vector<std::string> inputVec = getStringElements(userInput);
    this->data = inputVec;
   
    if(b) {
        if (iv->isValidNumberAndUrl(inputVec)) {
                return inputVec[0];
            } else {
                return "0";
            }
        }
    else if(iv->isValidInputNumbers(inputVec)) {
        return "3";
    } 
    else {
                return "0";
            }

}
 