#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TriangleAngleTesting
{
    TEST_CLASS(TriangleAngleTesting)
    {
    public:
        TEST_METHOD(TestGetTriangleAngles_Case1)
        {
            // Test getTriangleAngles() with side1 = 3.0, side2 = 4.0, and side3 = 5.0
            double side1 = 3.0;
            double side2 = 4.0;
            double side3 = 5.0;
            double* expected_angles = new double[3] {90.0, 53.13, 36.87};
            double* actual_angles = getTriangleAngles(side1, side2, side3);
            Assert::AreEqual(expected_angles[0], actual_angles[0]);
            Assert::AreEqual(expected_angles[1], actual_angles[1]);
            Assert::AreEqual(expected_angles[2], actual_angles[2]);
        }

       
            TEST_METHOD(TestGetTriangleAngles_Case2)
        {
            // Test getTriangleAngles() with side1 = 5.0, side2 = 5.0, and side3 = 5.0
            double side1 = 5.0;
            double side2 = 5.0;
            double side3 = 5.0;
            double* expected_angles = new double[3] {90.0, 60.0, 30.0};
            double* actual_angles = getTriangleAngles(side1, side2, side3);
            Assert::AreEqual(expected_angles[0], actual_angles[0]);
            Assert::AreEqual(expected_angles[1], actual_angles[1]);
            Assert::AreEqual(expected_angles[2], actual_angles[2]);
        }

        TEST_METHOD(TestGetTriangleAngles_Case3)
        {
            // Test getTriangleAngles() with side1 = 10.0, side2 = 20.0, and side3 = 22.36
            double side1 = 10.0;
            double side2 = 20.0;
            double side3 = 22.36;
            double* expected_angles = new double[3] {90.0, 45.0, 45.0};
            double* actual_angles = getTriangleAngles(side1, side2, side3);
            Assert::AreEqual(expected_angles[0], actual_angles[0]);
            Assert::AreEqual(expected_angles[1], actual_angles[1]);
            Assert::AreEqual(expected_angles[2], actual_angles[2]);
        }

        // Additional test methods for other test cases go here



    };

}



