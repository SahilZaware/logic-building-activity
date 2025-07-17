#include<iostream>

using namespace std;

class Array
{
    public : 
        int iSize;
        int *Arr;

    Array(int A)
    {
        iSize = A;
        Arr = new int[iSize];
    }

    ~Array()
    {
        delete []Arr;
    }


    void Accept()
    {
        int iCnt = 0;

        cout<<"Enter the values : \n";
        
        for( iCnt = 0; iCnt < iSize; iCnt++) 
        {
           cin >> Arr[iCnt] ;
        }
    }

    int CountEven()
    {
        int iCnt = 0, iCount = 0;

        for( iCnt = 0; iCnt < iSize; iCnt++) 
        {
            if(Arr[iCnt] % 2 == 0)
            {
                iCount++;
            }
        }
        return iCount;
    }
};

int main()
{
    int iLength = 0 , iRet = 0;

    cout << "Enter number of elements you want to store : \n";
    cin >> iLength;

    Array aobj(iLength);

    aobj.Accept();
    iRet = aobj.CountEven();

    cout<<"Number of even elements are : "<<iRet <<"\n";

    return 0;
}
