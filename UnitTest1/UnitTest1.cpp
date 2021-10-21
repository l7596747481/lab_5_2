#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int R;
			double x = 5;
			double n = 2;

			R = (1. * x * x - 2 * x * x * n) / (2. * n + 1);
			Assert::AreEqual(R, -15);
		}
	};
}
