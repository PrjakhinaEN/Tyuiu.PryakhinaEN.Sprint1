// Tyuiu.PryakhinaEN.Sprint1.Task4.V0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.PryakhinaEN.Sprint1.Task4.V0.Lib/Tyuiu.PryakhinaEN.Sprint1.Task4.V0.Lib.cpp"
int main()
{
    ISprint1Task4V0* rezult = new ServiceV0();
     std::cout << "PetrovCA\n";
    std::cout << "a ?= b:  " <<"\n";
    int a;
    int b;
    std::cin>> a;
    std::cin>> b;
       
    std::cout << "Rezult = " << rezult->Orr(a,b);
    std::cout << std::endl;
}