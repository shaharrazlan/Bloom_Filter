#include "SetHashParam.h"

// Implementation of the execute function from the SetHashParam class
void SetHashParam::execute(std::vector<std::string> input, BloomFilter* bf) {

    // Call the setParams function of the BloomFilter object with the provided input
    bf->setParams(input);
}
