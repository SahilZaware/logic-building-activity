#include<iostream>

using namespace std;

class Number
{
    public:
        int iNo;

    Number(int A)
    {
        iNo = A;
    }

    void DisplayFactor()
    {
        int iCnt = 0;
        
        for( iCnt = 1; iCnt <= iNo/2; iCnt++) // Start from 1 to avoid division by zero
        {
            if(iNo % iCnt == 0)
            {
                cout << iCnt << "\n"; // Fixed missing closing double-quote
            }
        }
    }
};

int main()
{
    int iValue = 0 ;

    cout << "Enter number : \n";
    cin >> iValue;

    Number nobj(iValue);

    nobj.DisplayFactor();

    return 0;
}
