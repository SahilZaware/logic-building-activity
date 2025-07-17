#include<stdio.h>

int CountSmallR(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCount++ ;
        }
        str++ ;
        CountSmallR(str);
    }
    return iCount ;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n]s",Arr);

    iRet = CountSmallR(Arr);

    printf("Small Letters are : %d",iRet);

    return 0;
}