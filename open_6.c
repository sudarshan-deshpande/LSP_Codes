#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
    char filename[100];
    char buffer[100];
    int fd, bytesRead;
    int count = 0;

    printf("Enter file name: ");
    scanf("%s", filename);

    fd = open(filename, O_RDONLY);

    if (fd < 0)
    {
        printf("Error opening file.\n");
        return 1;
    }

    while ((bytesRead = read(fd, buffer, sizeof(buffer))) > 0)
    {
        count += bytesRead;
    }

    printf("Total characters: %d\n", count);

    close(fd);

    return 0;
}