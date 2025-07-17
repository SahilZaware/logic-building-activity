#include<stdio.h>

int CountCapital(char *str)
{
    static int iCount = 0;
    if(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCount++ ;
        }
        str++ ;
        CountCapital(str);
    }
    return iCount ;
}

int main()
{
    char Arr[30];
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n]s",Arr);

    iRet = CountCapital(Arr);

    printf("Capital Letters are : %d",iRet);

    return 0;
}