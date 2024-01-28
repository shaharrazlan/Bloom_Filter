#include <gtest/gtest.h>
#include  "../src/BloomFilter.cpp"

// Include the BloomFilter class definition here

TEST(BloomFilterTest, AddAndContainsElement) {
    // Define the size of the Bloom filter and the hash functions
    int sizeOfBits = 800000000000000000000000000000;

    std::vector<std::string> input;

    // Define hash functions and their corresponding number of functions
    input.push_back("16");
    input.push_back("1");
    input.push_back("2");
 


    // Insert your hash functions into the vectors
   


    // Create a BloomFilter object
    BloomFilter bloomFilter;
    bloomFilter.setParams(input);
   
   
    // Add an element to the filter
    bloomFilter.addElement("www.example.com0");

    // Check for the presence of the added element
    EXPECT_TRUE(bloomFilter.containsElement("www.example.com0"));

    // Check for the absence of a non-added element
    EXPECT_FALSE(bloomFilter.containsElement("www.example.com1"));
}