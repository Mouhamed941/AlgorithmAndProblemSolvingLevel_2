// Problem 05_PrintNumberInReversedOrder.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
void PrintReversedNumbers(int Number)
{
    int Remainder = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        cout << Remainder ;
    }
}
int main()
{
    int Number = ReadPositiveNumber("Please Enter a Number ");
    PrintReversedNumbers(Number);
    
}

