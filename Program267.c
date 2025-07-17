#include<stdio.h>

void Display()
{
    int iCnt = 0;

    while(iCnt < 4)
    {
        printf("*\n");
        iCnt++ ;
    }
}

int main()
{
    Display();

    return 0;
}