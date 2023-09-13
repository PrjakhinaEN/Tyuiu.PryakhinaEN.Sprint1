#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.PryakhinaEN.Sprint1.Task4.V0.Lib/Tyuiu.PryakhinaEN.Sprint1.Task4.V0.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuPryakhinaENSprint1Task4Test0
{
	TEST_CLASS(TyuiuPryakhinaENSprint1Task4Test0)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// Init
			ISprint1Task4V0* rezult = new ServiceV0();
			int a = 4;
			int b = 4;
			bool c;

			c = rezult->Orr(a, b);

			// Valid
			Assert::AreEqual(true, c);
		}
	};
}
