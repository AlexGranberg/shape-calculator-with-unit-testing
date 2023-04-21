#include <gtest/gtest.h>

extern "C" {
#include "shapes.h"
}

class ShapesTest : public testing::Test {
protected:
    void SetUp() override {

    }    
};

TEST_F(ShapesTest, calculateRectangleAndParalellogramIfAreaAndCircumferenceIsOK){
    //ARRANGE
    float expectedArea = 12.0f;
    float expectedCircumference = 14.0f;
    //ACT
    float actualArea = 0;
    float actualCircumference = 0;
    calcRectangleParallelogram(3.0f, 4.0f, &actualArea, &actualCircumference);
    //ASSERT
    ASSERT_FLOAT_EQ(expectedArea, actualArea);
    ASSERT_FLOAT_EQ(expectedCircumference, actualCircumference);

}

TEST_F(ShapesTest, calculateCircleIfAreaAndCircumferenceIsOK){
    //ARRANGE
    float radius = 2;
    float expectedArea = 12.566371f;
    float expectedCircumference = 12.566371f;
    //ACT
    float actualArea = 0;
    float actualCircumference = 0;
    calcCircle(radius, &actualArea, &actualCircumference);
    //ASSERT
    ASSERT_FLOAT_EQ(expectedArea, actualArea);
    ASSERT_FLOAT_EQ(expectedCircumference, actualCircumference);

}

TEST_F(ShapesTest, calculateTriangleIfAreaAndCircumferenceIsOK){
    //ARRANGE
    float side1 = 3;
    float side2 = 5;
    float angle = 90;
    float expectedArea = 7.5f;
    float expectedCircumference = 13;
    //ACT
    float actualArea = 0;
    float actualCircumference = 0;
    calcTriangle(side1, side2, angle, &actualArea, &actualCircumference);
    //ASSERT
    ASSERT_FLOAT_EQ(expectedArea, actualArea);
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