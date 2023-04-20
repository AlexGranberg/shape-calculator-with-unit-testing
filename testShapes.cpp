#include <gtest/gtest.h>

extern "C" {
#include "shapes.h"
}

class ShapesTest : public testing::Test {
protected:
    void SetUp() override {

    }    
};

TEST_F(ShapesTest, calculateRectangleAndParalellogramAreaAndCircumferenceIsOK){
    //ARRANGE
    float expectedArea = 12.0f;
    float expectedCircumference = 12.0f;
    //ACT
    float actualArea = 0;
    float actualCircumference = 0;
    calcRectangleParallelogram(3.0f, 4.0f, &actualArea, &actualCircumference);
    //ASSERT
    ASSERT_FLOAT_EQ(expectedArea, actualArea);
    ASSERT_FLOAT_EQ(expectedCircumference, expectedArea);

}

TEST_F(ShapesTest, calculateCircleIsOK){
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