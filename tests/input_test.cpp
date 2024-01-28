#include <gtest/gtest.h>
#include  "../src/InputOutput.cpp"
#include  "../src/InputValidation.cpp"


// Include the input class definition here

// Test case for Input class
TEST(InputTest, ValidInputTest) {
    InputOutput io;
    InputValidation iv;
    // Check the result
    EXPECT_TRUE(iv.isANumber(io.getStringElements("16 1 2")));

    // Test with valid input (int and URL)
    EXPECT_TRUE(iv.isValidInputNumbers(io.getStringElements("16 1 2")));
    
    EXPECT_TRUE(iv.isValidInputNumbers(io.getStringElements(" 16 1    2")));
    
    EXPECT_TRUE(iv.isValidInputNumbers(io.getStringElements("16 1 2 1")));

    EXPECT_TRUE(iv.isValidInputNumbers(io.getStringElements("128 1 2")));

    EXPECT_TRUE(iv.isValidNumberAndUrl(io.getStringElements("1 www.google.com")));
}

TEST(InputTest, InvalidInputTest) {
    // Test with invalid input
    InputOutput io;
    InputValidation iv;
    
    EXPECT_FALSE(iv.isValidInputNumbers(io.getStringElements("A 1 2")));
    
    EXPECT_FALSE(iv.isValidInputNumbers(io.getStringElements("16 3 2")));

    EXPECT_FALSE(iv.isValidNumberAndUrl(io.getStringElements("1 ")));

    EXPECT_FALSE(iv.isValidNumberAndUrl(io.getStringElements("128 1 2")));
}
   
