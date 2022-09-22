#include <iostream>
using namespace std;
void PrintTableHeader()
{
	cout << "\n\n\t\t\t Multiplication Table From 1 To 10\n\n";
	for (size_t i = 1; i < 11; i++)
	{
		cout << "\t" << i;
	}
	cout << "\n_________________________________________________________________________________________\n";
}
string ColumSperator(int i)
{
	if (i < 10)
	{
		return "   ";
	}
	else
		return "  ";
}
void PrintMultiplicationtable()
{
		PrintTableHeader();
		for (size_t i = 1; i <= 10; i++)
		{
			cout << i << ColumSperator(i)<<"|";
			cout << "\t";
			for (size_t j = 1; j <= 10; j++)
			{
				cout << i * j << "\t";
			}
			cout << endl;
		}

}
int main()
{
	PrintMultiplicationtable();
}

