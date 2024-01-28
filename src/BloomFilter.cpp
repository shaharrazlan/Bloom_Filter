#include "BloomFilter.h"

// Constructor definition
BloomFilter::BloomFilter(){}


void BloomFilter::setBits(std::string sizeOfBits) {
   bitArray.clear();
   long long convertedNumberLL;

   try {
        convertedNumberLL = std::stoll(sizeOfBits);
        
        // Check for overflow before converting to int
        if (convertedNumberLL > std::numeric_limits<int>::max()) {
    
            convertedNumberLL = std::numeric_limits<int>::max();
        } else if (convertedNumberLL < std::numeric_limits<int>::min()) {
    
            convertedNumberLL = std::numeric_limits<int>::min();
        }

        int convertedNumber = static_cast<int>(convertedNumberLL);
    } catch (const std::out_of_range& e) {
        convertedNumberLL = 3500;
    } catch (const std::invalid_argument& e) {
        convertedNumberLL = 3500;
    }

   if(convertedNumberLL < 16) {
     convertedNumberLL = 16;
   }
   if(convertedNumberLL > 4000) {
    convertedNumberLL = 2000;
   }
   this->bitArray.resize(convertedNumberLL, false);
}

void BloomFilter::setNumHashFunctions(std::vector<std::string> num_hashFunctions) {
    std::set<int> intSet;
    for (int i = 0; i < num_hashFunctions.size(); ++i) {
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
    setBits(input[0]);
    setNumHashFunctions(input);
}