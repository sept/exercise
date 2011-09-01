#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[])
{
    if (argc != 2) 
    {
        printf("error input ./a.out a\n");
        exit(-1);
    }
    char *ptr = argv[1];
    int i = 0;

    for (i = 0; i < 10; i++)
    {
        while (*ptr != '\0')
        {
            ptr++;
            printf("%d\n", *ptr);
            if (*argv[i] == *ptr) 
            {
                printf("重复的有%d\n", *argv[i]);
            }
        }
    }

    return 0;
}
