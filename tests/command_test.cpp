#include <gtest/gtest.h>
#include  "../src/CheckUrl.cpp"
#include  "../src/AddUrl.cpp"
#include  "../src/SetHashParam.cpp"


TEST(ICommandTest, AddAndContainsUrl) {
    // Define the size of the Bloom filter and the hash functions


    // Define hash functions and their corresponding number of functions
    std::vector<ICommand*> commands; 
    std::vector<std::string> input;
    std::vector<std::string> setinput;


    BloomFilter *bf = new BloomFilter();
    ICommand *cu = new CheckUrl();
    ICommand *au = new AddUrl();
    ICommand *shp = new SetHashParam();
    
    
    commands.push_back(au);
    commands.push_back(cu);
    commands.push_back(shp);
    
    input.push_back("2");
    input.push_back("www.example");
     
    setinput.push_back("16");
    setinput.push_back("1");
    // Create a BloomFilter object
    
    commands[2]->execute(setinput, bf);
   

    testing::internal::CaptureStdout();

    commands[1]->execute(input, bf);

    // Check for the absence of a non-added element
    std::string output = ::testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "false\n");
    
    input.clear();
        
    input.push_back("1");
    input.push_back("www.example");
    commands[0]->execute(input, bf);

        
    testing::internal::CaptureStdout();

    commands[1]->execute(input, bf);

    // Check for the absence of a non-added element
    output = ::testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "true true\n");




     delete bf;
    delete au;
    delete cu;
    delete shp;
    

  
}

