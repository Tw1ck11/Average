// Среднее арифметическое.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    float num1, num2, num3, arithmetic_mean;

    cout << "This program calculate arithmetic mean of three numbers" << endl;

    cout << "Enter a first number: ";
    cin >> num1;

    cout << "Enter a second number: ";
    cin >> num2;

    cout << "Enter a third number: ";
    cin >> num3;

    arithmetic_mean = (num1 + num2 + num3) / 3;
    cout << "Arithmetic mean of three numbers is equal to " << arithmetic_mean << endl;
}
