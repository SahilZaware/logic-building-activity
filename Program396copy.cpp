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
    double iRet = 0.0;
    
    iRet = Addition(11.2,12.4);
    cout<<"The addition is : "<<iRet;
    return 0;
}