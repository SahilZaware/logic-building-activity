#include<stdio.h>

/*
    8 - 9:30
    9 - 10:30
    10 - 11:30
*/

void DisplayTimetable(int iStd)
{
    switch(iStd)
    {
        case 8 :
            printf("Your exam is at 9:30 AM\n");
            

        case 9 :
            printf("Your exam is at 10:30 AM\n");
          

        case 10 :
            printf("Your exam is at 11:30 AM\n");
            

        default:
            printf("You entered a wrong standard \n");
            
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