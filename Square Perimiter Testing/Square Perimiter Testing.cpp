#include "pch.h"
#include "CppUnitTest.h"
extern "C" int calculate_square_perimeter(int length);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SquarePerimiterTesting
{
	TEST_CLASS(SquarePerimiterTesting)
	{
	public:
		
		TEST_METHOD(SquareSquarePerimeter)
			{
			// Test calculate_square_perimeter() with length = 5
			int length = 5;
			int expected_perimeter = 20;
			int actual_perimeter = calculate_square_perimeter(length);
			Assert::AreEqual(expected_perimeter, actual_perimeter);

			// Test calculate_square_perimeter() with length = 10
			length = 10;
			expected_perimeter = 40;
			actual_perimeter = calculate_square_perimeter(length);
			Assert::AreEqual(expected_perimeter, actual_perimeter);
		}
	};
}
