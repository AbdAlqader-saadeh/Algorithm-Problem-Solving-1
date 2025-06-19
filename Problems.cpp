#include <iostream>
#include <string>
using namespace std;

void PrintNumbersFromTO10(short Number)
{
	for (short i = Number; i <= 10;i++)
	{
		cout << i << "\t|";
			for (short j = 1;j <= 10;j++)
			{				
				string Result = to_string(i * j);
				cout << Result;
				cout << "\t";
			}
			cout << endl;
	}
}

void PrintNumbersFromTO10Height(short Number)
{
	cout << endl << endl;
	for (short i = Number; i <= 10;i++)
	{
		string Result = "\t" + to_string(i);
		cout << Result;
		
	}
	cout << endl;
	for (short j = 0; j <= 100;j++)
		cout << "-";

	cout << endl;
}
// Way For Teacher
void PrintTableHeader()
{
	cout << "\n\n\n\t\t  Multiplication Table From 1 to 10\n\n";

	cout << "\t";

	for (short i = 1; i <= 10; i++)
	{
		cout << i << "\t";
	}

	cout << "\n---------------------------------------------------------------------------------------------\n";
}

string ColumSperator(short i)
{
	if (i < 10)
		return "   |";
	else
		return "  |";
}

void PrintMultiplicationTable()
{
	PrintTableHeader();

	for (short i = 1; i <= 10;i++)
	{

		cout << i << ColumSperator(i) << "\t";

		for (short j = 1; j <= 10;j++)
		{
			cout << i * j << "\t";
		}
		cout << endl;
	}
}
int main()
{
	//PrintNumbersFromTO10Height(1);
	//PrintNumbersFromTO10(1);

	// Teasher 
	PrintMultiplicationTable();
}