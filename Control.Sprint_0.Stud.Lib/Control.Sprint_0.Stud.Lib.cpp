// Control.Sprint_0.Stud.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.CoursControl_0/Tyuiu.CoursControl_0.cpp"
#include <iostream>
#include <math.h>
// TODO: This is an example of a library function
class Service8V0 :public ISprint0Task8V0  //, public ISprint1Task4
{

	// Inherited via ISprint0Task8V0
	virtual int Control(int a) override
	{
		int contr;
		int b;
		int c;
		int d;
		b = a / 100;
		c = a / 10 % 10;
		d = a % 10;
		contr = b * c * d;
			std::cout << "Proizved =  " << contr <<std::endl;
		
		return contr; //решение
	}

};