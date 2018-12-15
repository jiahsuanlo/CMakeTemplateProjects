#include <iostream>
#include "gtest/gtest.h"
#include <RCUtil/Interpolation.h>

class InterpolationTest : public ::testing::Test {
protected:
	// You can remove any or all of the following functions if its body
	// is empty.

	InterpolationTest() {
		// You can do set-up work for each test here.
	}

	virtual ~InterpolationTest() {
		// You can do clean-up work that doesn't throw exceptions here.
	}

	// If the constructor and destructor are not enough for setting up
	// and cleaning up each test, you can define the following methods:
	virtual void SetUp() {
		// Code here will be called immediately after the constructor (right
		// before each test).
		xVec = { 1,2,3,4,5 };
		yVec = { 1,2,3,4,5 };
	}

	virtual void TearDown() {
		// Code here will be called immediately after each test (right
		// before the destructor).
	}

	// Objects declared here can be used by all tests in the test case for Project1.
	rcu::Vecd xVec;
	rcu::Vecd yVec;

};


// IndependentMethod is a test case - here, we have 2 tests for this 1 test case
TEST_F(InterpolationTest, Interpolate2) {
	double xi= 2.5;
	double yi=	rcu::interpLinear(xVec, yVec, xi, rcu::EXTRAP_LINEAR);
	EXPECT_EQ(2.5, yi);
}
