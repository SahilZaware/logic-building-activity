#include<stdio.h>

int StrlenX(char *str)
{
    static int iCnt  = 0;

    if(*str != '\0')
    {
        iCnt++ ;
        str++ ;
        StrlenX(str);
    }
    return iCnt;
}

int main()
{
    char Arr[30] ;
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",&Arr);

    iRet = StrlenX(Arr);

    printf("Length of String is : %d",iRet);

    return 0;
}