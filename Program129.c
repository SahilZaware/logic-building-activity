// Input : 5
// Output :  a b c d e

#include<stdio.h>

void Display(int iNo)
{
    char ch = '\0';  // ASCII VALUE OF A 
    int iCnt = 0;   
            
    for(iCnt = 1 , ch = 65 ; iCnt <= iNo; iCnt++,ch++)
    {
        printf("%c\t",ch);
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