#include<iostream>
using namespace std;

bool CheckBit(int iNo)
{
    int iMask = 0x2;  // HexaDecimal Number

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
        cout<<"Bit is ON";
    }
    else
    {
        cout<<"Bit is OFF";
    }
   
    return 0;
}