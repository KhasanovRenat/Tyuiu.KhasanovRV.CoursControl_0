#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KhasanovRV.CoursControl_0.Task2.V1.Lib/Tyuiu.KhasanovRV.CoursControl_0.Task2.V1.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuKhasanovRVCoursControl0Task2V1Test
{
	TEST_CLASS(TyuiuKhasanovRVCoursControl0Task2V1Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V2* date = new Service1();
			int x = 0, y = 0, z = 0;
			int c = date->Rezultat(x, y ,z);

			Assert::AreEqual(5, c);
		}

		TEST_METHOD(TestMethod2)
		{
			ISprint0Task8V2* date = new Service1();
			int x = 4, y = 2, z = 1;
			int c = date->Rezultat(x, y ,z);

			Assert::AreEqual(6, c);
		}

		TEST_METHOD(TestMethod3)
		{
			ISprint0Task8V2* date = new Service1();
			int x = 3, y = 1, z = 2;
			int c = date->Rezultat(x, y, z);

			Assert::AreEqual(6, c);
		}
	};
}
