#include <gtest/gtest.h>

extern "C" {
#include "rockPaperScissor.h"
}

class RockPaperScissorTest : public testing::Test {
protected:
    void SetUp() override {

    }    
};

TEST_F(RockPaperScissorTest, ReturnsNumberBetweenOneAndThree) {
    // Arrange
    int expectedMin = 1;
    int expectedMax = 3;

    // Act
    int actualResult = CpuRandPick();

    // Assert
    ASSERT_GE(actualResult, expectedMin);
    ASSERT_LE(actualResult, expectedMax);
}

TEST_F(RockPaperScissorTest, TestGameLogicIfPaperBeatsRock) {
    // Arrange
    int pick= 1;
    int sel = 2;

    // Act
    int actualResult = determineResult(pick, sel);

    // Assert
    ASSERT_EQ(actualResult, 1);
}

TEST_F(RockPaperScissorTest, TestGameLogicIfScissorBeatsPaper) {
    // Arrange
    int pick= 2;
    int sel = 3;

    // Act
    int actualResult = determineResult(pick, sel);

    // Assert
    ASSERT_EQ(actualResult, 1);
}

TEST_F(RockPaperScissorTest, TestGameLogicIfRockBeatsScissor) {
    // Arrange
    int pick= 3;
    int sel = 1;

    // Act
    int actualResult = determineResult(pick, sel);

    // Assert
    ASSERT_EQ(actualResult, 1);
}

TEST_F(RockPaperScissorTest, TestGameLogicIfScissorLooseToRock) {
    // Arrange
    int pick= 1;
    int sel = 3;

    // Act
    int actualResult = determineResult(pick, sel);

    // Assert
    ASSERT_EQ(actualResult, -1);
}

TEST_F(RockPaperScissorTest, TestGameLogicIfRockLooseToPaper) {
    // Arrange
    int pick= 2;
    int sel = 1;

    // Act
    int actualResult = determineResult(pick, sel);

    // Assert
    ASSERT_EQ(actualResult, -1);
}

TEST_F(RockPaperScissorTest, TestGameLogicIfPaperLooseToScissor) {
    // Arrange
    int pick= 3;
    int sel = 2;

    // Act
    int actualResult = determineResult(pick, sel);

    // Assert
    ASSERT_EQ(actualResult, -1);
}

TEST_F(RockPaperScissorTest, TestGameLogicIfRockTiesRock) {
    // Arrange
    int pick = 1;
    int sel = 1;

    // Act
    int actualResult = determineResult(pick, sel);

    // Assert
    ASSERT_EQ(actualResult, 0);
}

TEST_F(RockPaperScissorTest, TestGameLogicIfPaperTiesPaper) {
    // Arrange
    int pick = 2;
    int sel = 2;

    // Act
    int actualResult = determineResult(pick, sel);

    // Assert
    ASSERT_EQ(actualResult, 0);
}

TEST_F(RockPaperScissorTest, TestGameLogicIfScissorTiesScissor) {
    // Arrange
    int pick = 3;
    int sel = 3;

    // Act
    int actualResult = determineResult(pick, sel);

    // Assert
    ASSERT_EQ(actualResult, 0);
}
