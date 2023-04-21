#include <gtest/gtest.h>

extern "C" {
#include "calculator.h"
}

class CalculatorTest : public testing::Test {
protected:
    void SetUp() override {

    }    
};

TEST_F(CalculatorTest, calculatorAdditionTest){
    //ARRANGE
    float number1 = 5;
    float number2 = 4;
    char op = '+';
    float expected = 9;
    //ACT
    float result = calculator(number1, number2, op);
    //ASSERT
    ASSERT_FLOAT_EQ(expected, result);

}

TEST_F(CalculatorTest, calculatorSubtractionTest){
    //ARRANGE
    float number1 = 5;
    float number2 = 4;
    char op = '-';
    float expected = 1;
    //ACT
    float result = calculator(number1, number2, op);
    //ASSERT
    ASSERT_FLOAT_EQ(expected, result);

}

TEST_F(CalculatorTest, calculatorMultiplicationTest){
    //ARRANGE
    float number1 = 5;
    float number2 = 4;
    char op = '*';
    float expected = 20;
    //ACT
    float result = calculator(number1, number2, op);
    //ASSERT
    ASSERT_FLOAT_EQ(expected, result);

}

TEST_F(CalculatorTest, calculatorDivisionTest){
    //ARRANGE
    float number1 = 10;
    float number2 = 2;
    char op = '/';
    float expected = 5;
    //ACT
    float result = calculator(number1, number2, op);
    //ASSERT
    ASSERT_FLOAT_EQ(expected, result);

}

TEST_F(CalculatorTest, calculatorModulusTestPositive){
    //ARRANGE
    float number1 = 12.5;
    float number2 = 3.0;
    char op = '%';
    float expected = 0.5;
    //ACT
    float result = calculator(number1, number2, op);
    //ASSERT
    ASSERT_FLOAT_EQ(expected, result);

}

TEST_F(CalculatorTest, calculatorModulusTestNegative){
    //ARRANGE
    float number1 = 10.0;
    float number2 = 3.0;
    char op = '%';
    float expected = 1.0;
    //ACT
    float result = calculator(number1, number2, op);
    //ASSERT
    ASSERT_FLOAT_EQ(expected, result);

}
