#include<iostream>
using namespace std;

int main()
{
    int iNo = 83;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 2;
        cout<< iDigit;
        iNo = iNo/2;
    }
    cout<<"\n";

    return 0;
}