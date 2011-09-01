#include <stdio.h>
#define M 20

int main (void)
{
    int i = 0;
    char a[M] = "I like this game";
    char *p = a;

    while (*p != '\0')
    {
        if (*p == 'e') 
        {
            *p -= 'a'-'A';
        }
        p++;
    }

    for (i = 0; i < M; i++)
    {
        printf("%c", a[i]);
    }
    printf("\n");
    return 0;
}
