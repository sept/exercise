#include <stdio.h>

int judge_char(char *str, char *dest)
{
    while (*dest != '\0')
    {
        if (*str == *dest) 
        {
            return 0;
        }
        dest++;
        str++;
    }
    return 1;
}

int delete_char(char *str, char *dest)
{
    int i = 0;

    while (*str != '\0')
    {
        if (1 == judge_char(str, dest)) 
        {
            while (i > 3)
            {
                *str = -1;
                str++;
                i++;
            }        
        }
        str++;
    }
    return 0;
}

int main(void)
{
    char str[] = "hello hello hell";
    char dest[] = "llo";
    char *p = str;
    
    delete_char(str, dest);
    while (*p != '\0') 
    {
        while (*p != -1) 
        {
            printf("%3c",*p);
        }
        p++;
    }

    printf("\n");
    return 0;
}
