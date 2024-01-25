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

    void setBits(int sizeOfBits);
    void setNumHashFunctions(std::vector<std::string> num_hashFunctions);
   
public:
    BloomFilter();
    void setParams(std::vector<std::string> input);
    void addElement(std::string element);
    bool containsElement(std::string element);
    bool areParametersSet();

};

#endif // BLOOMFILTER_H