#include<stdio.h>
#include<string.h>
int main(void)
{
    char str_a[100];
    char *str;
    char str_rev[100];
    char *cpy_rev = str_rev + 99;
    *cpy_rev = 0;
    scanf("%s", str = str_a);
    if (*str == '+' || *str == '-') ++str;
    for (; *str; *--cpy_rev = *str++) 
    ;
    puts(!strcmp(cpy_rev, *str_a == '+' || *str_a == '-' ? str_a + 1 : str_a) ? "yes" : "no");
    return 0;
}

#if 0
#include<stdio.h>
int judge(const char *s);//实现省略
int main(void)
{int x;
char str[100];
scanf("%d", x);
sprintf(str, "%d", x > 0 ? x : -x);
puts(judge(str) ? "yes" : "no");
return 0;
}
#endif
