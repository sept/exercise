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
