#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KhasanovRV.CoursControl_0.Task1.V1.Lib/Tyuiu.KhasanovRV.CoursControl_0.Task1.V1.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuKhasanovRVCoursControl0Task1V1Test
{
	TEST_CLASS(TyuiuKhasanovRVCoursControl0Task1V1Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V0* date = new Service1();
			int a = 123;
			int c = date->Control(a);

			Assert::AreEqual(6, c);
		}

		TEST_METHOD(TestMethod2)
		{
			ISprint0Task8V0* date = new Service1();
			int a = 111;
			int c = date->Control(a);

			Assert::AreEqual(1, c);
		}

		TEST_METHOD(TestMethod3)
		{
			ISprint0Task8V0* date = new Service1();
			int a = 909;
			int c = date->Control(a);

			Assert::AreEqual(0, c);
		}
	};
}
