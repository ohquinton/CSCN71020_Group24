#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
extern "C" int calculate_rectangle_area(int length1, int length2);

namespace AreaRectangleTest
{
	TEST_CLASS(AreaRectangleTest)
	{
	public:
        TEST_METHOD(TestRectangleArea)
        {

            // Test calculate_rectangle_area() with length1 = 5 and length2 = 7
            int length1 = 5;
            int length2 = 7;
            int expected_area = 35;
            int actual_area = calculate_rectangle_area(length1, length2);
            Assert::AreEqual(expected_area, actual_area);

        }
    };
}
