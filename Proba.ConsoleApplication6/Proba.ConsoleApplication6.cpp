// Proba.ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Proba.StaticLib6/Proba.StaticLib6.cpp"
//using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    ISprint0Task6* dd = new Servise6();
    //int a;
    // float date;
   /* int b;
    cout << "¬ведите a:";
    cin >> a;
    cout << "¬ведите b:";
    cin >> b;*/
   std::cout << " Result =" << dd->Zuul(2, 4);
    // cout << " Result =" << d;
    std::cout << std::endl;
}

