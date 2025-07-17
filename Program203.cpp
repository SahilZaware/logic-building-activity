#include<iostream>
using namespace std;

int main()
{
    int iNo1 = 13;
    int iNo2 = 24;

    int iAns = 0;

    iAns = iNo1 & iNo2;
    cout<<"Bitwise AND : "<<iAns<<"\n";

    iAns = iNo1 | iNo2;
    cout<<"Bitwise OR : "<<iAns<<"\n";

    iAns = iNo1 ^ iNo2;
    cout<<"Bitwise XOR : "<<iAns<<"\n";

    return 0;
}