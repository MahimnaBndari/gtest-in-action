#include "StringCalculator.h"

#include <gtest/gtest.h>
 
TEST(StringCalculatorTestSuite,add_emptyInputString_ZeroIsExpected){

//Arrays

string input="";

int expectedValue=0;

//Act

int actualValue=Add(input);

//Assert

ASSERT_EQ(actualValue,expectedValue);

}

TEST(StringCalculatorTestSuite,add_oneInputString_OneIsExpected){

//Arrange

string input="1";

int expectedValue=1;

//Act

int actualValue=Add(input);

//Assert

ASSERT_EQ(actualValue,expectedValue);

}

TEST(StringCalculatorTestSuite,add_twoInputString_SumIsExpected){

//Arrange

string input="2,2";

int expectedValue=4;

//Act

int actualValue=Add(input);

//Assert

ASSERT_EQ(actualValue,expectedValue);

}
 // Test for multiple comma-delimited numbers
TEST(StringCalculatorTestSuite, add_multipleCommaDelimitedNumbers_SumIsExpected) {
    // Arrange
    std::string input = "1,2,3,4";
    int expectedValue = 10;

    // Act
    int actualValue = Add(input);

    // Assert
    ASSERT_EQ(actualValue, expectedValue);
}
// Test for newline and comma delimiters
TEST(StringCalculatorTestSuite, add_newlineAndCommaDelimitedNumbers_SumIsExpected) {
    // Arrange
    std::string input = "1\n2,3";
    int expectedValue = 6;

    // Act
    int actualValue = Add(input);

    // Assert
    ASSERT_EQ(actualValue, expectedValue);
}
