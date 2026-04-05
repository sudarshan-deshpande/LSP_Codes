#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
    int fd = 0;
    fd = open("first.c", O_RDWR);

    if (fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File gets opened succesfully with fd : %d\n", fd);
    }

    close(fd);
    return 0;
}