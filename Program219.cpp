#include<iostream>
using namespace std;

int main()
{
   int iValue = 0;
   int iPos = 0;
   int iMask = 0x1;

   cout<<"Enter the number : \n";
   cin>>iValue;

   cout<<"Enter the position : \n";
   cin>>iPos;

   iMask = iMask << (iPos - 1);

   return 0;
}
