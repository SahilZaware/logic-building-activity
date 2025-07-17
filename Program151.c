#include<stdio.h>

void Display(char *ptr)
{
    while(*ptr != '\0')
    {
        printf("%c\n",*ptr);
        ptr++;
    }
}

int main()
{
   char Arr[30];
   char *ptr = Arr;

   int iCnt = 0;

   printf("Enter String : \n");
   scanf("%[^'\n']s",Arr);

    Display(Arr);          // DISPLAY(100)
    return 0;    
}