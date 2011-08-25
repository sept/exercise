#if 0
#include<stdio.h>
int main(int argc, const char *argv[])
{
    char *p = "pech and banana";
    char *str = "a";
    int counter = 0;
    int i = 0;

    while (*p != '\0')
    {
        for (i = 0; i < 20; i++)
        {
            if (*p == *str) 
            {
                counter++;
            }
        }
    }

    printf("共找到子串的次数为：%d\n",counter);
    return 0;
}
#endif

#if 1

#include<stdio.h>

int find_p(char *, char *);
int find_counter(char *, char *);

int main(int argc, const char *argv[])
{
    char *str = "hello helol hello";
    char *p = "ll";
  //  int counter = 0;
  //  counter = find_counter(char *str, char *p);
    printf("%d\n",find_counter(str, p));
}

int find_p(char *str, char *p)
{
    int i = 0;

    while (*str != '\0' && *p != '\0')
    {
        if (*str != *p) 
        {
            return 0;
        }
        str++;
        p++;
    }
    return 1;
}

int find_counter(char *str, char *p)
{
    int counter = 0;

    while (*str != '\0')
    {    
        if (1 == find_p(str, p)) 
        {
            counter++;
        }
        str++;
    }
    return counter;
}
    
#endif
