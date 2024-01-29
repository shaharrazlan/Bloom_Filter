#include "BloomFilter.h"

// Constructor definition
BloomFilter::BloomFilter(){}


void BloomFilter::setBits(std::string& sizeOfBits) {
    bitArray.clear();
     // Use string representation directly
    std::string convertedNumberStr = sizeOfBits;
    if (sizeOfBits.length() > 6) {
        convertedNumberStr = sizeOfBits.substr(0, 4);
    }
    // Additional checks for the range if needed
    int convertedNumber = std::stoi(convertedNumberStr);

    if (convertedNumber < 16) {
        convertedNumber = 16;
    }
    if (convertedNumber > 4000) {
        convertedNumber = 3000;
    }

    this->bitArray.resize(convertedNumber, false);
    
}


void BloomFilter::setNumHashFunctions(std::vector<std::string> num_hashFunctions) {
    std::set<int> intSet;
    for (int i = 1; i < num_hashFunctions.size(); ++i) {
        intSet.insert(std::stoi(num_hashFunctions[i]));
    }
     
    std::vector<int> intVec; 
    for (auto it = intSet.begin(); it != intSet.end(); ++it) {
        intVec.push_back(*it);
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
        hashValue = static_cast<int>(hashValue & 0x7FFFFFFF);
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
        hashValue = static_cast<int>(hashValue & 0x7FFFFFFF);
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
    setBits(input[0]);
    setNumHashFunctions(input);
}

int BloomFilter::getsize() {
    return this->bitArray.size();
}