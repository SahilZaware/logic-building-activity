#include<iostream>
using namespace std;

bool CheckBit(int iNo)
{
    int iMask = 65536;  // 17th Bit Decimal Number

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
        cout<<"17th Bit is ON";
    }
    else
    {
        cout<<"17th Bit is OFF";
    }
   
    return 0;
}