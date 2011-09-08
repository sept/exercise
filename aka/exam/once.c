#if 0 
/*********************************
找出字符串中 第一个出现一次的字符
*********************************/
#include<stdio.h>
#include <stdlib.h>

int print_num(char *p)
{
    int i = 0;
    int j = 0;
    char *dest = NULL;

    while (*p != '\0') 
    {
        if (*p == 0) 
        {
            continue;
        }
        dest = p;
        for (; *dest != '\0' ; dest++)
        {
            if (*p == *(dest+1)) 
            {
                *(dest+1) = 0;
            }
        }
        p++;
      
    }
    printf("p = %s\n", p);
    return 0;
}
int main(int argc, char *argv[])
{
    print_num(argv[1]);
    return 0;
}
    
#endif
#if 1

#include <stdio.h>
#include <stdlib.h>

int judge_once(char *ptr)
{
    int buf[26] = {0};
    char *str = ptr;
    
    while (*ptr != '\0')
    {
        buf[*ptr - 'a'] += 1;
        ptr++;
    }
    printf("*str = %c\n", *str);
    while (*str != '\0')
    {
        if (buf[*str-'a'] == 1) 
        {
            printf("%c\n", *str);
            return 1;
        }
        str++;
    }
    return 0;
}
int main(int argc, char *argv[])
{
    if (argc != 2) 
    {
        printf("input error~!\n");
        exit(-1);
    }
    judge_once(argv[1]);
    return 0;
}
    
#endif
