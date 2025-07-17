// Input : 5
// Output :  a b c d e

#include<stdio.h>

void Display(int iNo)
{
    char ch = 'a';
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",ch);
        ch++;
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}