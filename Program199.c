#include<stdio.h>

void DisplayRev(char *str)
{
    char *p = str;

    while(*p != '\0')
    {
        p++;
    }

    p--;

    while(p >= str)
    {
        printf("%c\n",*p);
        p--;
    }
}

int main()
{
    char Arr[30];

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    DisplayRev(Arr);

    return 0;
}