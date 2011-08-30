#include<stdio.h>
char b[20];
int sentenc(char a[])
{
    char *p = NULL;
    int i = 0;
    int j = 0;
    p = a;

    while (*p == ' ')
    {
        p++;
    }
    while (*p != '\0')
    {
        while (*p != ' ')
        {
            b[j] += 1;
            p++;    
        }
        printf("b[%d] = %c\n", j, b[j]);
        j++;
    }
    printf("%s\n", b);
}
int main(int argc, const char *argv[])
{
    char str[] = "I love china";
    sentenc(str);
    return 0;
}
