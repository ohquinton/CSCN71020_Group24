#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* determine_rectangle(struct point p1, struct point p2, struct point p3, struct point p4);
extern "C" struct point {
    int x;
    int y;
};

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace REQ001
{
	TEST_CLASS(REQ001)
	{
    public:

        TEST_METHOD(TestSquare)
        {
            // create four points that form a square
            struct point p1 = { 0, 0 };
            struct point p2 = { 0, 5 };
            struct point p3 = { 5, 5 };
            struct point p4 = { 5, 0 };

            // call the determine_rectangle function
            char* result = determine_rectangle(p1, p2, p3, p4);

            // check if the result is correct
            Assert::AreEqual("The points form a square.\n", result);
        }

        TEST_METHOD(TestRectangle)
        {
            // create four points that form a rectangle
            struct point p1 = { 0, 0 };
            struct point p2 = { 0, 5 };
            struct point p3 = { 10, 5 };
            struct point p4 = { 10, 0 };

            // call the determine_rectangle function
            char* result = determine_rectangle(p1, p2, p3, p4);

            // check if the result is correct
            Assert::AreEqual("The points form a rectangle.\n", result);
        }

        TEST_METHOD(TestNotARectangle)
        {
            // create four points that do not form a rectangle
            struct point p1 = { 0, 0 };
            struct point p2 = { 0, 5 };
            struct point p3 = { 10, 5 };
            struct point p4 = { 5, 0 };

            // call the determine_rectangle function
            char* result = determine_rectangle(p1, p2, p3, p4);

            // check if the result is correct
            Assert::AreEqual("The points do not form a rectangle or square.\n", result);
        }

    };
}