// Problem 03_PerfectNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
bool CheckIfPerfectNumber(int Number)
{
    int Counter = 0;
    int M = floor(Number / 2);
    for (size_t i = 1; i <= M; i++)
    {
        if (Number % i == 0)
        {
            Counter += i;
        }
    }
    return Number == Counter;
}
void PrintResult(int Number)
{
    if (CheckIfPerfectNumber(Number))
        cout << Number << "It's a Perfect Number";
    else
        cout << Number << " It's Not a Perfect Number";
}
int main()
{
    int Number = ReadPositiveNumber("Please Enter a Number .");
    PrintResult(Number);
    
}


