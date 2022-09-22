// Problem_04_PerfectNumbersFrpm_1_To_.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
void PrintPerfectNumbersFrom1ToN(int Number)
{
    for (int i = 1; i <= Number; i++)
    {
        if (CheckIfPerfectNumber(i))
        {
            cout << i << endl;
        }
    }
}
int main()
{
    int Number = ReadPositiveNumber("Please Enter a Number .");
    PrintPerfectNumbersFrom1ToN(Number);
}


