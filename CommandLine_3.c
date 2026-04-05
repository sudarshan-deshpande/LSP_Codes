#include <stdio.h>

int main(int argc, char *argv[])
{
    int iCnt = 0;

    printf("The number of command line arguments are : %d\n", argc);

    for (iCnt = 0; iCnt < argc; iCnt++)
    {
        printf("%s\n", argv[iCnt]);
    }
    return 0;
}