#include "pch.h"
#include "CppUnitTest.h"
extern "C" int calculate_rectangle_area(int length1, int length2);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RectanglePerimandAreaTesting
{
	TEST_CLASS(RectanglePerimandAreaTesting)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int length1 = 2;
			int length2 = 3;
			int expectedArea = 6;

			int actualArea = calculate_rectangle_area(length1, length2);

			Assert::AreEqual(expectedArea, actualArea);
		}
	};
}
