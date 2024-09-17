#include "StringCalculator.h"

#include <gtest/gtest.h>

class StringCalculatorFixture:public testing::Test{
protected:
string input;
int expectedValue;
int actualValue;
};

TEST_F(StringCalculatorFixture,add_emptyInputString_ZeroIsExpected){

//Arrange

input="";

expectedValue=0;

//Act

actualValue=Add(input);

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
// Test for custom single-character delimiter
TEST(StringCalculatorTestSuite, add_customSingleCharacterDelimiter_SumIsExpected) {
    // Arrange
    std::string input = "//;\n1;2";
    int expectedValue = 3;

    // Act
    int actualValue = Add(input);

    // Assert
    ASSERT_EQ(actualValue, expectedValue);
}
// Test for negative numbers (throws exception)
TEST(StringCalculatorTestSuite, add_negativeNumbers_ThrowsException) {
    // Arrange
    std::string input = "1,-2,3";

    // Act & Assert
    ASSERT_THROW(Add(input), std::invalid_argument);
}
// Test for numbers over 1000 (ignores them)
TEST(StringCalculatorTestSuite, add_numbersOver1000_Ignored) {
    // Arrange
    std::string input = "1001,2";
    int expectedValue = 2;

    // Act
    int actualValue = Add(input);

    // Assert
    ASSERT_EQ(actualValue, expectedValue);
}
// Test for multi-character delimiter
TEST(StringCalculatorTestSuite, add_multicharacterDelimiter_SumIsExpected) {
    // Arrange
    std::string input = "//[***]\n1***2***3";
    int expectedValue = 6;

    // Act
    int actualValue = Add(input);

    // Assert
    ASSERT_EQ(actualValue, expectedValue);
}
// Test for multiple delimiters
TEST(StringCalculatorTestSuite, add_multipleDelimiters_SumIsExpected) {
    // Arrange
    std::string input = "//[;][***]\n1;2***3";
    int expectedValue = 6;

    // Act
    int actualValue = Add(input);

    // Assert
    ASSERT_EQ(actualValue, expectedValue);
}
