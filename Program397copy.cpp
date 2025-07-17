#include<iostream>
using namespace std;

template <class T>

T Addition(T no1 , T no2)
{
    T Ans = 0;
    Ans = no1 + no2;
    return Ans;
}

int main()
{
    int iRet = 0;
    float fRet = 0.0f;
    double dRet = 0.0;

    iRet = Addition(11.4,12.8);
    cout<<"The Addition is : "<<iRet<<"\n";

    fRet = Addition(11.4,12.8);
    cout<<"The Addition is : "<<fRet<<"\n";

    dRet = Addition(11.4,12.8);
    cout<<"The Addition is : "<<dRet<<"\n";

    return 0;
}