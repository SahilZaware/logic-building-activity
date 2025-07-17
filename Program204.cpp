#include<iostream>
using namespace std;

int main()
{
    int iValue1 = 0;
    int iMask = 2;    // Decimal Number
    int iResult = 0;

    cout<<"Enter the number : \n";
    cin>>iValue1;

    iResult = iValue1 & iMask ;

    if(iResult == 0)
    {
        cout<<"Second Bit is OFF\n";
    }
    else
    {
        cout<<"Second Bit is ON\n";
    }
   
    return 0;
}