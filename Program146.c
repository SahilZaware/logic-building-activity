#include<stdio.h>

int main()
{
    char Name[] = { 'M','u','m','b','a','i','\0'};

    printf("%s",Name);

    printf("\n");
    
    printf("%c",Name[0]);
    printf("%c",Name[1]);
    printf("%c",Name[2]);
    printf("%c",Name[3]);

    return 0;
}