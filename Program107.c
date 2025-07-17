// Input : 4
// Output : -1 -2 -3 -4 

#include<stdio.h>

void Display(int iNo)
{
    int iCount = 0;

    for(iCount = iNo; iCount >= -4; iCount--)
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