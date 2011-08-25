#include<stdio.h>
#include <stdlib.h>
int compare(const char *a, const char *b)
{
    int i = 0;

    if (*a == '\0' && *b == '\0')
        return 0;
    else if (*a == '\0')
        return -1;
    else if(*b == '\0')
        return 1;

    while (*a == *b)
    {
        
    }
#if 0        
    for (i = 0; i < 10; i++)
    {
        while (a[i] == b[i])
        {
            i++;
        }
        if (a[i] > b[i])
        {
            acount++;
        }
        else
            bcount++;
    }

    if (0 == acount && 0 == bcount)
    {
        return 0;
    }
    if (acount > bcount)
    {
        return 1;
    }
    else 
    {
        return -1;
    }
    return 0;
#endif
}
int main(int argc, const char *argv[])
{
    int i = 0;
    if (argc != 3)
    {
        printf("a.out\n");
        exit(0);
    }
    i = compare(argv[1], argv[2]);
    printf("%d\n", i);
    return 0;
}
