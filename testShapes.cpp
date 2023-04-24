#include <gtest/gtest.h>

extern "C" {
#include "shapes.h"
}

class ShapesTest : public testing::Test {
protected:
    void SetUp() override {

    }    
};

TEST_F(ShapesTest, calculateRectangleAndParalellogramIfCircumferenceIsOK){
    //ARRANGE
    float expectedCircumference = 14.0f;
    //ACT
    float actualCircumference = 0;
    calcRectangleParallelogramCircumference(3.0f, 4.0f, &actualCircumference);
    //ASSERT
    ASSERT_FLOAT_EQ(expectedCircumference, actualCircumference);

}

TEST_F(ShapesTest, calculateRectangleAndParalellogramIfAreaIsOK){
    //ARRANGE
    float expectedArea = 12.0f;
    //ACT
    float actualArea = 0;    
    calcRectangleParallelogramArea(3.0f, 4.0f, &actualArea);
    //ASSERT
    ASSERT_FLOAT_EQ(expectedArea, actualArea);
    

}

TEST_F(ShapesTest, calculateCircleIfAreaIsOK){
    //ARRANGE
    float radius = 2;
    float expectedArea = 12.566371f;
    //ACT
    float actualArea = 0;
    calcCircleArea(radius, &actualArea);
    //ASSERT
    ASSERT_FLOAT_EQ(expectedArea, actualArea);

}

TEST_F(ShapesTest, calculateCircleIfCircumferenceIsOK){
    //ARRANGE
    float radius = 2;
    float expectedCircumference = 12.566371f;
    //ACT
    float actualCircumference = 0;
    calcCircleCircumference(radius, &actualCircumference);
    //ASSERT
    ASSERT_FLOAT_EQ(expectedCircumference, actualCircumference);

}

TEST_F(ShapesTest, calculateTriangleIfAreaIsOK){
    //ARRANGE
    float side1 = 3;
    float side2 = 5;
    float expectedArea = 7.5f;
    //ACT
    float actualArea = 0;
    calcTriangleArea(side1, side2, &actualArea);
    //ASSERT
    ASSERT_FLOAT_EQ(expectedArea, actualArea);

}

TEST_F(ShapesTest, calculateTriangleIfCircumferenceIsOK){
    //ARRANGE
    float side1 = 3;
    float side2 = 5;
    float angle = 90;
    float expectedCircumference = 13;
    //ACT
    float actualCircumference = 0;
    calcTriangleCircumference(side1, side2, angle, &actualCircumference);
    //ASSERT
    ASSERT_FLOAT_EQ(expectedCircumference, actualCircumference);

}

TEST_F(ShapesTest, calcHypotenuseIsOK){
    //ARRANGE
    float expectedHypotenuse = 5.0f;
    //ACT
    float actualHypotenuse = calcHypotenuse(3.0f, 4.0f, 53.1301f); // 53.1301 degrees = arctan(4/3) = angle opposite to l
    //ASSERT
    ASSERT_FLOAT_EQ(expectedHypotenuse, actualHypotenuse);
}