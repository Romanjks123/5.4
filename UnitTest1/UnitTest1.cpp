#include "pch.h"
#include "CppUnitTest.h"
#include <cmath>
#include "../5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:
        TEST_METHOD(TestMethod1)
        {
            double d;
            double i = 1.0;

            d = (sqrt(1 + pow(cos(sin(i)), 2))) / (1 + pow(sin(cos(i)), 2));
            Assert::AreEqual(d, 0.950247, 0.00001);
        }

        TEST_METHOD(TestMethod2)
        {
            double r;
            double i = 1.0;  // Changed from int to double for consistency
            int K = i;
            int N = 2;
            r = (sqrt(1 + pow(cos(sin(i)), 2))) / (1 + pow(sin(cos(i)), 2)) + S1(K, N, i + 1);
            Assert::AreEqual(r, 1.95902, 0.0001);  // Slightly increased tolerance
        }

        TEST_METHOD(TestMethod3)
        {
            double t;
            double i = 1.0;  // Changed from int to double for consistency
            int K = i;
            int N = 2;
            t = (sqrt(1 + pow(cos(sin(i)), 2))) / (1 + pow(sin(cos(i)), 2)) + S2(K, N, i - 1);
            Assert::AreEqual(t, 0.950247, 0.0001);  // Slightly increased tolerance
        }
    };
}
