#ifndef BLOOMFILTER_H
#define BLOOMFILTER_H

#include <iostream>
#include <vector>
#include <functional>
#include <sstream>



class BloomFilter {
private:
    std::vector<bool> bitArray;
    std::vector<int> num_hashFunctions;// Added a semicolon here
   
public:
    BloomFilter();
    void setBits(int sizeOfBits);
    void setNumHashFunctions(std::vector<int> num_hashFunctions);
    void addElement(std::string element);
    bool containsElement(std::string element);
    bool areParametersSet();

};

#endif // BLOOMFILTER_H