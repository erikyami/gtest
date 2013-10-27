// tests.cpp
#include "jokenpo.cpp"
#include <gtest/gtest.h>
 
TEST(JokenPoTest, TestaPedraTesoura) {
    ASSERT_EQ("pedra", jokenpo("pedra","tesoura"));
}

TEST(JokenPoTest, TestaTesouraPedra) {
    ASSERT_EQ("pedra", jokenpo("tesoura","pedra"));
}


TEST(JokenPoTest, TestaPapelPedra) {
    ASSERT_EQ("papel", jokenpo("papel","pedra"));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
