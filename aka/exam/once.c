#if 1
#include <stdio.h>
#include <stdlib.h>

int judge_once(char *ptr, char *p)
{
    char *str = ptr;
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        if (*str++ == *p) 
        {
            return 0;
        }
        str++;
    }
    return 1;
}

int print_once(char ptr[])
{
    char *p = ptr;

    while (*p != '\0')
    {
         if (1 == judge_once(ptr, p)) 
         {
             printf("%c\n",*p);
             exit(0);
         }
         p++;
    }
    return 0;
}
int main(int argc, char *argv[])
{
    
    char ptr[] = "helloehi";
    print_once(ptr);
    return 0;
}
#endif

#if 0
#include<stdio.h>
#include <stdlib.h>

int print_num(char *p)
{
    int i = 0;
    int j = 0;

    while (*p != '\0') 
    {
        for (j = i+1; j < 10; j++)
        {
            if (p[i] == p[j]) 
            {
                p[j] = -1;
            }
        }
        p++;
        printf("*p = %c p[i] = %c\n", *p, p[i]);
    }

}
int main(int argc, const char *argv[])
{
    print_num(argv[1]);
    return 0;
}
    
#endif
