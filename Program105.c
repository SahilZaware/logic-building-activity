// Input : 4
// Output : 4 3 2 1 1 2 3 4 

#include<stdio.h>

void Display(int iNo)
{
    int iCount = 0;

    for(iCount = iNo; iCount >= 1; iCount--)
    {
        printf("%d\t",iCount);
    }

    for(iCount = 1; iCount <= iNo; iCount++)
    {
        printf("%d\t",iCount);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}