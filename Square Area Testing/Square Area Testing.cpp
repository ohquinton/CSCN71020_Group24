#include "pch.h"
#include "CppUnitTest.h"
extern "C" int calculate_square_area(int length);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SquareAreaTesting
{
	TEST_CLASS(SquareAreaTesting)
	{
	public:
		
		TEST_METHOD(SquareArea)
		{
			// create a test case
			int length = 5;
			int expectedArea = 25;

			// call the calculate_square_area function
			int area = calculate_square_area(length);

			// check if the returned value is correct
			Assert::AreEqual(expectedArea, area);
		}
	};
}
