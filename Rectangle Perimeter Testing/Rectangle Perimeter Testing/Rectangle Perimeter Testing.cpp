#include "pch.h"
#include "CppUnitTest.h"
extern "C" int calculate_rectangle_perimeter(int length1, int length2);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RectanglePerimeterTesting
{
	TEST_CLASS(RectanglePerimeterTesting)
{
	public:
		
		TEST_METHOD(TestMethod1)
		{// Test calculate_rectangle_perimeter() with length1 = 5 and length2 = 7
			int length1 = 5;
			int length2 = 7;
			int expected_perimeter = 24;
			int actual_perimeter = calculate_rectangle_perimeter(length1, length2);
			Assert::AreEqual(expected_perimeter, actual_perimeter);
		}
	};
}
