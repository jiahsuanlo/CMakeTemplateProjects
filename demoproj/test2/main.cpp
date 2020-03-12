#include "gtest/gtest.h"
#include <lib1.h>

TEST(test1, case1)
{
	EXPECT_EQ(1, 1);
}

TEST(test1, case2)
{
	EXPECT_EQ(add(3, 2), 5);
}

