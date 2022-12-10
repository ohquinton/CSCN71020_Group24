#include "pch.h"
#include "CppUnitTest.h"
extern "C"  char* analyzeTriangle(int side1, int side2, int side3);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace AnalyzeTriangleTest
{
	TEST_CLASS(AnalyzeTriangleTest)
	{
    public:

        // test the analyzeTriangle function with a valid triangle
        TEST_METHOD(ValidTriangleTest)
        {
            // create the triangle sides
            int side1 = 3;
            int side2 = 4;
            int side3 = 5;

            // call the analyzeTriangle function
            char* result = analyzeTriangle(side1, side2, side3);

            // check that the result is correct
            Assert::AreEqual("Scalene triangle", result);
        }

        // test the analyzeTriangle function with an invalid triangle
        TEST_METHOD(InvalidTriangleTest)
        {
            // create the triangle sides
            int side1 = 5;
            int side2 = 5;
            int side3 = 10;

            // call the analyzeTriangle function
            char* result = analyzeTriangle(side1, side2, side3);

            // check that the result is correct
            Assert::AreEqual("It is an invalid triangle", result);
        }

        // test the analyzeTriangle function with an equilateral triangle
        TEST_METHOD(EquilateralTriangleTest)
        {
            // create the triangle sides
            int side1 = 5;
            int side2 = 5;
            int side3 = 5;

            // call the analyzeTriangle function
            char* result = analyzeTriangle(side1, side2, side3);

            // check that the result is correct
            Assert::AreEqual("Equilateral triangle ", result);
        }

        // test the analyzeTriangle function with an isosceles triangle
        TEST_METHOD(IsoscelesTriangleTest)
        {
            // create the triangle sides
            int side1 = 5;
            int side2 = 5;
            int side3 = 3;

            // call the analyzeTriangle function
            char* result = analyzeTriangle(side1, side2, side3);

            // check that the result is correct
            Assert::AreEqual("Isosceles triangle", result);
       
        }

        TEST_METHOD(ScaleneTriangleTest)
        {
            // create the triangle sides
            int side1 = 6;
            int side2 = 7;
            int side3 = 8;

            // call the analyzeTriangle function
            char* result = analyzeTriangle(side1, side2, side3);

            // check that the result is correct
            Assert::AreEqual("Scalene triangle", result);
        }
    };
}
