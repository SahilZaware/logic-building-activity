#include<iostream>

using namespace std;

void Swap(int *p, int *q)
{
    int temp = 0;

    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int iNo1 = 0, iNo2 = 0;

    cout<<"Enter first number : \n";
    cin>>iNo1;

    cout<<"Enter second number : \n";
    cin>>iNo2;
    
    Swap(&iNo1,&iNo2);

    cout<<"value of No1 after swapping : "<<iNo1<<"\n";
    cout<<"value of No2 after swapping : "<<iNo2<<"\n";

    return 0;
}
