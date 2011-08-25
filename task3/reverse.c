#include<stdio.h>

int main(int argc, const char *argv[])
{
    char a[] = "abcdefghi";
    char *p = a;
    int i = 0;
   
    while (*p != '\0')
    {
        p++;
        i++;
    }

    for (i = i - 1; i >= 0; i--)
    {
        p--;
        putchar(*p);
    }
    
    *p = '\0';
    printf("\n");
    return 0;
}
