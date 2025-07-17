#include<iostream>
using namespace std;

class Alphabets
{
    public : 

    void Display(char cValue)
    {
        if(cValue >= 'A' && cValue <= 'Z')
        {
            cout << char(cValue + 32);
        }
        else if(cValue >= 'a' && cValue <= 'z')
        {
            cout << char(cValue - 32);
        }
        else
        {
            cout<<"Incorrect Alphabet...!";
        }
    }
};

int main()
{
    Alphabets aobj;

    char cValue;

    cout<<"Enter the character : ";
    cin >> cValue;

    aobj.Display(cValue);

    return 0;
}