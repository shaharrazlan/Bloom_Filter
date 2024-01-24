#include <gtest/gtest.h>
#include  "../src/BloomFilter.cpp"

// Include the BloomFilter class definition here

TEST(BloomFilterTest, AddAndContainsElement) {
    // Define the size of the Bloom filter and the hash functions
    int sizeOfBits = 128;

    // Define hash functions and their corresponding number of functions

    std::vector<int> num_hashFunctions;


    // Insert your hash functions into the vectors
   
    num_hashFunctions.push_back(1);

 
    num_hashFunctions.push_back(2);

    // Create a BloomFilter object
    BloomFilter bloomFilter;
    bloomFilter.setBits(sizeOfBits);
    bloomFilter.setNumHashFunctions(num_hashFunctions);
    
   
    // Add an element to the filter
    bloomFilter.addElement("www.example.com0");

    // Check for the presence of the added element
    EXPECT_TRUE(bloomFilter.containsElement("www.example.com0"));

    // Check for the absence of a non-added element
    EXPECT_FALSE(bloomFilter.containsElement("www.example.com1"));
}