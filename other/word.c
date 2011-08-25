#include<stdio.h>
int sentenc(char a[])
{
    char *p = NULL;
    int b[20] = 0;
    int i = 0;
    int j = 0;
    p = a;

    while (*p == ' ')
    {
        i++;
        p++;
    }
    while (*p != '\0')
    {
        while (*p != ' ')
        {
            b[j] += 1;
            p++;    
        }
        j++;
    }
}
int main(int argc, const char *argv[])
{
    char str[] = "I love china";
    sentenc(str);
    return 0;
}
