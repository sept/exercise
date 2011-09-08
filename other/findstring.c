#if 0 
#include<stdio.h>

int find_mstr(char a[])
{
    int i = 0;
    int j = 0;
    int counter = 0;

    for (i = 0; i < 10; i++)
    {
        counter = 0;
        if (a[i] != 0)
        {
            for (j = i+1; j < 9; j++)
            {
                if (a[i] == a[j])
                {
                    counter++;
                    a[j] = 0;
                }
            }
            printf("%c 出现的次数是：%d\n", a[i], counter);
        } 
    }
}
int main(int argc, const char *argv[])
{
    char str[] = "banana";
    find_mstr(str);
    return 0;
}    
#endif

#if 1

#include<stdio.h>

int b[52];
char find_mstr(char *a)
{
    char *p;
    p = a;
    int i = 0;
    int temp = 0;
    int mn = 0 ;

    while (*p != '\0')  
    {
        b[*p - 'a'] += 1; 
        p++;
    }
    for (i = 0; i < 52; i++)
    {
        temp = b[0];
        if(temp < b[i])
        {
            temp = b[i];
            mn = i;
        }
    }
    printf("%c出现次数最多为 %d次\n", ((char)mn + 'a'), temp);
    return 0;  
}
int main(int argc, char *argv[])
{
 //   char str[] = "banana";
    printf("字符串为：%s\n", argv[1]);
    find_mstr(argv[1]);
    return 0;
}
    
#endif
