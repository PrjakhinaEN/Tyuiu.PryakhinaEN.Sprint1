// Proba.StaticLib6.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "math.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
// TODO: This is an example of a library function
class Servise6 : public ISprint0Task6
{
	virtual int Zuul(int a, int b) override
	{
		int dd;
		dd = (5 * a) * (7 + b);
		return dd;
	}

};


