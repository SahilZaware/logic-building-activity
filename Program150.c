#include<stdio.h>

int main()
{
   char Arr[30];
   char *ptr = Arr;

   int iCnt = 0;

   printf("Enter String : \n");
   scanf("%[^'\n']s",Arr);

    while(*ptr != '\0')
    {
        printf("%c\n",*ptr);
        ptr++;
    }
    return 0;    
}