#include <iostream>
#include <string>

using namespace std;

short ReadPositiveNumber(string Massage)
{
    short Number;

    do {
        cout << Massage;
        cin >> Number;
    } while (Number < 0);

    return Number;
}

bool IsPerfrctNumber(short Number)
{
    short Sum = 0;
    for (short i = 1; i < Number;i++)
    {
        if (Number % i == 0)
            Sum += i;
    }
    return Sum == Number;
}
void PrintIsNumberIsPerfect(short Number)
{   
    if (IsPerfrctNumber(Number))
        cout << Number << " Is Perfect Number" << endl;
    else
        cout << Number << " Is Not Perfect Number" << endl;

}
// 4
void PrintPerfectNumberFrom1toNumber(short Number)
{
    for (short i = 1; i < Number;i++)
    {
        if (IsPerfrctNumber(i))
            cout << i << endl;
    }
}
// 5
string ReadstringNumbers(string Massage)
{
    string PassWord;

    cout << Massage;
    cin >> PassWord;

    return PassWord;
}
// wrong solution
void PrintStringNumbers(string PassWord)
{
    for (short i = 4; i >= 0;i--)
    {
        cout << PassWord[i] << endl;
    }
}

// correct solution
void PrintDigits(short Number)
{
    short Remainder = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        cout << Remainder << endl;
    }
}
int main()
{
    short Number = ReadPositiveNumber("Please Enter Your Number  : ");

    //PrintIsNumberIsPerfect(Number);
    //PrintPerfectNumberFrom1toNumber(Number);

    PrintDigits(Number);
}

