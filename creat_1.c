#include <fcntl.h>
#include <stdio.h>

int main()
{
    int fd = 0;

    fd = creat("LSP.txt", 0777);

    if (fd == -1)
    {
        printf("Failed to create file\n");
    }
    else
    {
        printf("File gets successfully created with fd : %d\n", fd);
    }

    return 0;
}