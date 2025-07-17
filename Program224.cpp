#include<iostream>
using namespace std;

int OFFBit(int iNo, int iPos)
{
    
   int iMask = 0xffffffef;
   int iResult = 0;

    iResult = iNo & iMask;

   return iResult;
}

int main()
{
   int iValue = 0;
   int iRet = 1;
   int iLocation = 0;
   
   cout<<"Enter the number : \n";
   cin>>iValue;

   cout<<"Enter the position : \n";
   cin>>iLocation;

   iRet = OFFBit(iValue , iLocation);

   cout<<"Number after Bit toggle is : "<<iRet<<"\n";
   
   return 0;
}
