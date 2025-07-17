#include<iostream>

using namespace std;

void DisplayFactor(int iNo)
{
    int iCnt = 0;
    for( iCnt = 1; iCnt < iNo; iCnt++) // Start from 1 to avoid division by zero
    {
        if(iNo % iCnt == 0)
        {
            cout << iCnt << "\n"; // Fixed missing closing double-quote
        }
    }
}

int main()
{
    int iValue = 0;

    cout << "Enter number : \n";
    cin >> iValue;

    DisplayFactor(iValue);

    return 0;
}
