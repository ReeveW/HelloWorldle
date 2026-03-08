// we tried to add tests before we ran out of time.

#include <gtest/gtest.h>
#include "Model.h"

TEST(ModelTest, TestYearGuess){
    Model m(0);
    EXPECT_EQ(m.yearGuess(-1), "\033[31m-1 ^");
    EXPECT_EQ(m.yearGuess(1900), "\033[31m1900 ^");
    EXPECT_EQ(m.yearGuess(100000), "\033[31m100000 v");
    EXPECT_EQ(m.yearGuess(2000), "\033[31m2000 v");
    EXPECT_EQ(m.yearGuess(1984), "\033[33m1984 ^");
    EXPECT_EQ(m.yearGuess(1986), "\033[33m1986 v");
    EXPECT_EQ(m.yearGuess(1980), "\033[31m1980 ^");
    EXPECT_EQ(m.yearGuess(1990), "\033[31m1990 v");
    EXPECT_EQ(m.yearGuess(1985), "\033[32m1985");
}
