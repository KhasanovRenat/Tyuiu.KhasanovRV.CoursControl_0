// Tyuiu.KhasanovRV.CoursControl_0.Task1.V1.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.CoursControl_0/Tyuiu.CoursControl_0.cpp"

// TODO: This is an example of a library function
class Service1 :public ISprint0Task8V0
{
	virtual int Control(int a) override 
	{
		int dig1, dig2, dig3;
		dig1 = a / 100;
		dig2 = a % 100 / 10;
		dig3 = a % 10;
		return dig1 * dig2 * dig3;
	}

};
