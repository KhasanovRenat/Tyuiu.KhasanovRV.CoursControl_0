// Tyuiu.KhasanovRV.CoursControl_0.Task2.V1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.KhasanovRV.CoursControl_0.Task2.V1.Lib/Tyuiu.KhasanovRV.CoursControl_0.Task2.V1.Lib.cpp"
using namespace std;

int main()
{
    ISprint0Task8V2* date = new Service1;
    setlocale(LC_ALL, "Russian");
    int x, y, z;
    cout << "Дано арифметическое выражение: 5 + (2 * x - z) / (3 + y * y)\n" << "Введите значения переменных:\n";
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "z = ";
    cin >> z;
    cout << "Результатом вычислений будет: " << date->Rezultat(x, y, z);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
