// Tyuiu.PryakhinaEN.Sprint1.Task4.V0.Lib.cpp : Defines the functions for the static library.
//


#include "pch.h"
#include "framework.h"
#include <math.h>
#include "../../Tyuiu.Cours1/Tyuiu.Cours1.cpp"
#include <iostream>

// TODO: This is an example of a library function
class ServiceV0 :public ISprint1Task4V0  //, public ISprint1Task4
{

	// Inherited via ISprint1Task4V0
	virtual bool Orr(int a, int b) override
	{
		bool rezult;
		if (a == b)
		{
			rezult = true;
			std::cout << "true  " << std::endl;
		}
		else
		{
			rezult = false;
			std::cout << "false  " << std::endl;
		}
		return rezult; //решение
	};
	
};