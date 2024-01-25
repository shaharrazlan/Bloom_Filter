#include <gtest/gtest.h>
#include  "../src/CheckUrl.cpp"
#include  "../src/AddUrl.cpp"
#include  "../src/SetHashParam.cpp"


TEST(ICommandTest, AddAndContainsUrl) {
    // Define the size of the Bloom filter and the hash functions
    int sizeOfBits = 128;

    // Define hash functions and their corresponding number of functions

    std::vector<int> num_hashFunctions;
    std::vector<std::string> input;

    num_hashFunctions.push_back(1);
    input.push_back("www.example");

    // Create a BloomFilter object
    BloomFilter* bf = new BloomFilter();
 

    CheckUrl* cu = new CheckUrl();
    AddUrl* au = new AddUrl();
    SetHashParam* shp = new SetHashParam();

    shp->execute("8 1");

    testing::internal::CaptureStdout();

    cu->execute(input, bf);

    // Check for the absence of a non-added element
    std::string output = ::testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "false");
}