#include "StringCaluclator.h"
#include <gtest/gtest.h>

TEST(StringCaluclatorTestSuite,add_emptyInputString_ZeroIsExpected){
//Arrange
  String input="";
  int expectedValue=0;
  //Act
  int actualValue=Add(input);
//Assert
  ASSERT_EQ(actualValue,expectedValue);
}
