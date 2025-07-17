#include<stdio.h>

/*
    8 - 9:30
    9 - 10:30
    10 - 11:30
*/

void DisplayTimetable(int Std)
{
    if (Std == 8)
    {
        printf("Your exam is at 9:30 AM\n");
    }
    if (Std == 9)
    {
        printf("Your exam is at 10:30 AM\n");
    }
    else if(Std == 10)
    {
        printf("Your exam is at 11:30 AM\n");
    }
    else
    {
        printf("Sorry,we dont have the information about your standard.\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Please enter your standard : \n");
    scanf("%d",&iValue);

    DisplayTimetable(iValue);

    return 0;
}