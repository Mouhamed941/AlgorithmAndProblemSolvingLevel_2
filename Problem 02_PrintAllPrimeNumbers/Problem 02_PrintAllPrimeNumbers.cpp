// Problem 02_PrintAllPrimeNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };
enPrimeNotPrime CheckPrime(int Number)
{

    int M = round(Number / 2);
    for (int Counter = 2; Counter <= M; Counter++)
    {
        if (Number % Counter == 0)
        {
            return enPrimeNotPrime::NotPrime;
        }

    }
    return enPrimeNotPrime::Prime;
}
void PrintPrimeNumberFrom_1_To_N(int Number)
{
    enPrimeNotPrime PrimeNotPrime;
    for (size_t i = 2; i <= Number; i++)
    {
        if (CheckPrime(i)==enPrimeNotPrime::Prime)
        {
            cout << i << endl;
        }
    }
}
int main()
{
    int Number = ReadPositiveNumber("Please Enter a Number : ");
    PrintPrimeNumberFrom_1_To_N(Number);
}


