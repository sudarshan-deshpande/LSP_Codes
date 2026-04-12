#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int main()
{
    int fd = 0;
    off_t offset = 0;
    char Buffer[100];

    fd = open("LSP.txt", O_RDONLY);

    offset = lseek(fd, 10, SEEK_CUR); // Starting Point

    printf("Current offset is : %ld\n", offset);

    read(fd, Buffer, 10);
    offset = lseek(fd, 0, SEEK_CUR); // 10

    printf("Current offset is : %ld\n", offset);
    return 0;
}