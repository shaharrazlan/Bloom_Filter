#include "SetHashParam.h"

void SetHashParam::execute(std::vector<std::string> input, BloomFilter* bf) {
    bf->setParams(input);
}