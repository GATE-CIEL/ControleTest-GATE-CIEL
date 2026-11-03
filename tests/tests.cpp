#include <gtest/gtest.h>
#include "../Fct.h"  // Remplace par ton fichier header

TEST(ManualTest, Example) {
    ASSERT_TRUE(true); // Un test simple qui réussit toujours
}

TEST(AgeValide, AgesValides) {
    EXPECT_TRUE(AgeValide(1));
    EXPECT_TRUE(AgeValide(20));
    EXPECT_TRUE(AgeValide(120));
}

TEST(AgeValide, AgesInvalides) {
    EXPECT_FALSE(AgeValide(0));
    EXPECT_FALSE(AgeValide(-2));
    EXPECT_FALSE(AgeValide(121));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
