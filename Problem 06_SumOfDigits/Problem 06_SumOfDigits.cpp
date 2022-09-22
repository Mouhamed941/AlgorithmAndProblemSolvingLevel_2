// Problem 06_SumOfDigits.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
float ReadPositiveNumber(string Message)
{
    int Num;
    do
    {
        cout << Message << endl;
        cin >> Num;

    } while (Num <= 0);

    return Num;
}
int SumAllDigits(int Number)
{
    int Remainder = 0;
    int Counter = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        Counter += Remainder;
    }
    return Counter;
}
void PrintResult(int Result)
{
    cout << "\nSum Of Digits is : " << Result << endl;
}
int main()
{
    int Number = ReadPositiveNumber("Please Enter a Number ");
    PrintResult(SumAllDigits(Number));
    
}
