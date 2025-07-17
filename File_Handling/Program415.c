#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    fd = creat("Marvellous.txt",0777);  // file descriptor

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File successfully created\n");
    }

    return 0;
}