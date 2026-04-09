#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

int main()
{
    int fd = 0;

    fd = open("Marvellous.txt", O_RDONLY);

    printf("Value of fd is : %d\n", fd);

    if (errno != 0)
    {
        switch (errno)
        {
        case ENOENT:
            perror("Error ");
            break;

        case EACCES:
            perror("Error ");
            break;

        default:
            printf("%s\n", strerror(errno));
        }
    }
    return 0;
}