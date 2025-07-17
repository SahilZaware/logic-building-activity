#include<stdio.h>

int strlenX(char *ptr)
{
    int iCount = 0;
    while(*ptr != '\0')
    {
        iCount++;
        ptr++;
    }
    return iCount;
}

int main()
{
   char Arr[30];
   int iRet = 0;

   printf("Enter String : \n");
   scanf("%[^'\n']s",Arr);

   iRet = strlenX(Arr);

   printf("Length of String is : %d\n",iRet);
    return 0;    
}