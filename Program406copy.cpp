#include<iostream>
using namespace std;

template <class T>
class Array
{
    public:
        T *Arr;
        int iSize;

        Array(int iLength);
        ~Array();
        void Accept();
        void Display();
        T Addition();
};

template <class T> 
Array<T> :: Array(int iLength)
{
    iSize = iLength;
    Arr = new T[iSize];
}

template <class T>
Array<T> :: ~Array()
{
    delete []Arr;
}

template <class T>
void Array<T> :: Accept()
{
    int i = 0;
    cout<<"Enter the elements : \n";
    for(i = 0; i < iSize; i++)
    {
        cin>>Arr[i];
    }
}

template <class T>
void Array<T> :: Display()
{
    int i = 0;
    cout<<"Elements of the array are : \n";
    for(i = 0; i < iSize; i++)
    {
        cout<<Arr[i]<<"\n";
    }
}

template <class T>
T Array<T> :: Addition()
{
    int i = 0;
    float iSum = 0.0f;

    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}

int main()
{
    Array <float>aobj(5);
    float iRet = 0.0f;

    aobj.Accept();
    aobj.Display();

    iRet = aobj.Addition();
    cout<<"Addition is : "<<iRet;

    return 0;
}