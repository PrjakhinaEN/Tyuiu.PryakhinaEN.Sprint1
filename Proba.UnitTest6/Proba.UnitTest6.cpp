#include "pch.h"
#include "CppUnitTest.h"
#include "../Proba.StaticLib6/Proba.StaticLib6.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ISprint0Task6
{
	TEST_CLASS(ISprint0Task6)
	{
	public:
		TEST_METHOD(TestMethod0)
		{
			ISprint0Task6* dd = new Servise6();
			int a = 2;
			int b = 3;
			int c;

			c = dd -> Zuul(a, b);

			Assert::AreEqual(1, c);
		}
	};
}
