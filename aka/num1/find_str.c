#include <stdio.h>
#include <stdlib.h>

int judge(char *ptr, char *dest)
{
    while (*dest != '\0')
    {
        while (*ptr != *dest)
        {
            return 0;
        }
        ptr++;
        dest++;
    }

    return 1;
}

int counter(char *ptr, char *dest)
{
    int counter = 0;

    if (*ptr == '\0' || *dest == '\0') 
    {
        return counter;
    }

    while (*ptr != '\0')
    {
        if (1 == judge(ptr, dest)) 
        {
            counter++;
        }
        ptr++;
    }

    return counter;
}

int main(int argc, char *argv[])
{
    if (argc != 3) 
    {
        printf("error to input  ./a.out a b\n");
        exit(-1);
    }
    int num = counter(argv[1], argv[2]);
    printf("%d\n", num);
    return 0;
}
