#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.2.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest621
{
	TEST_CLASS(UnitTest621)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int const n = 3;
			int a[n] = { 2,5,1 };
			Sort(a, n);
				int t = a[2];
				Assert::AreEqual(t, 1);

		}
	};
}
