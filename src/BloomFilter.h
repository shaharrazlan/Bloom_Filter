#ifndef BLOOMFILTER_H
#define BLOOMFILTER_H

#include <iostream>
#include <vector>
#include <set>
#include <functional>
#include <sstream>
#include <limits>



class BloomFilter {
private:
    std::vector<bool> bitArray;
    std::vector<int> num_hashFunctions;// Added a semicolon here

    void setBits(std::string sizeOfBits);
    void setNumHashFunctions(std::vector<std::string> num_hashFunctions);
   
public:
    BloomFilter();
    void setParams(std::vector<std::string> input);
    void addElement(std::string element);
    bool containsElement(std::string element);
    bool areParametersSet();

};

#endif // BLOOMFILTER_H