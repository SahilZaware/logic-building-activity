#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Name[30];
    char Arr[20] = {'\0'};

    int fd = 0;

    printf("Please enter the file name that you want to open\n");
    scanf("%[^'\n']s",Name);

    fd = open(Name,O_RDONLY);

    lseek(fd,5,0);

    read(fd,Arr,10);

    printf("Data from file is : %s\n",Arr);

    close(fd);

    return 0;
}

// SEEK_SET          SURWATIPASUN 0
// SEEK_CUR          ATTA JITHE AHE TITHUN 1
// SEEK_END          SHEWATAPASUN  2 