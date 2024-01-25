#include "BloomFilter.h"

// Constructor definition
BloomFilter::BloomFilter(){}


void BloomFilter::setBits(int sizeOfBits) {
   bitArray.clear();
   this->bitArray.resize(sizeOfBits, false);
}

void BloomFilter::setNumHashFunctions(std::vector<std::string> num_hashFunctions) {
    std::vector<int> intVec;
    for (int i = 1; i < num_hashFunctions.size(); ++i) {
        intVec.push_back(std::stoi(num_hashFunctions[i]));
    }

    this->num_hashFunctions = intVec;
}

// Function to add an element to the Bloom filter
void BloomFilter::addElement(std::string element) {
    for (int x = 0; x < num_hashFunctions.size(); x++) {
        std::hash<std::string> hash1;
        std::size_t hashValue = hash1(element);
        for (int i = 1; i < num_hashFunctions[x]; i++) {
            std::hash<std::string> hash2;
            hashValue = hash2(std::to_string(hashValue));
        }
        size_t index = hashValue % bitArray.size();
        bitArray[index] = true;
    }
}

// Function to check if an element is possibly in the Bloom filter
bool BloomFilter::containsElement(std::string element) {
    for (int x = 0; x < num_hashFunctions.size(); x++) {
        std::hash<std::string> hash1;
        std::size_t hashValue = hash1(element);
        for (int i = 1; i < num_hashFunctions[x]; i++) {
            std::hash<std::string> hash2;
            hashValue = hash2(std::to_string(hashValue));
        }
        size_t index = hashValue % bitArray.size();
        if (!bitArray[index]) {
            return false;
        }
    }
    return true;
}

bool BloomFilter::areParametersSet() {
    return !num_hashFunctions.empty();
}

void BloomFilter::setParams(std::vector<std::string> input) {
    setBits(std::stoi(input[0]));
    setNumHashFunctions(input);
}