//
#include "pch.h"
#include "CppUnitTest.h"
#include "../Control.Sprint_0.Stud.Lib/Control.Sprint_0.Stud.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ISprint8Task4V0
{
	TEST_CLASS(ISprint8Task4V0)
	{
	public:

		TEST_METHOD(TestMethod2)
		{
			// Init
			ISprint0Task8V0* rezult = new Service8V0();
			int a = 123;
			int contr;

			contr = rezult->Control( a);

			// Valid
			Assert::AreEqual(6, contr);
		}
	};
}

