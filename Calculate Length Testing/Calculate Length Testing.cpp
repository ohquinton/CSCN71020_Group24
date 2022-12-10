#include "pch.h"
#include "CppUnitTest.h"

extern "C"  int calculate_length(struct point p1, struct point p2);
extern "C" struct point {
	int x;
	int y;
};
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculateLengthTesting
{
	TEST_CLASS(CalculateLengthTesting)
	{
	public:
		
   
     TEST_METHOD(TestLength1)
        {
            // create two points
            struct point p1 = { 0, 0 };
            struct point p2 = { 0, 5 };

            // call the calculate_length function
            int length = calculate_length(p1, p2);

            // check if the result is correct
            Assert::AreEqual(5, length);
        }

        TEST_METHOD(TestLength2)
        {
            // create two points
            struct point p1 = { 0, 0 };
            struct point p2 = { 10, 5 };

            // call the calculate_length function
            int length = calculate_length(p1, p2);

            // check if the result is correct
            Assert::AreEqual(11, length);
        }

        TEST_METHOD(TestLength3)
        {
            // create two points
            struct point p1 = { 0, 0 };
            struct point p2 = { -10, 5 };

            // call the calculate_length function
            int length = calculate_length(p1, p2);

            // check if the result is correct
            Assert::AreEqual(11, length);
        }

    };
}