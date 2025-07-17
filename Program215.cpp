#include<iostream>
using namespace std;

bool CheckBit(int iNo)
{
    int iMask = 68;  // Decimal Number

    int iResult = 0;
    
    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue1 = 0 ;
    bool bRet = false;

    cout<<"Enter the number : \n";
    cin>>iValue1;

    bRet = CheckBit(iValue1);

    if(bRet == true)
    {
        cout<<"3rd & 7th Bits are ON";
    }
    else
    {
        cout<<"3rd & 7th Bits are OFF";
    }
   
    return 0;
}