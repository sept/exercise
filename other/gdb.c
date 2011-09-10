#include<stdio.h>
int main(int argc, const char *argv[])
{
    int num;
    char str;
    char p[10];

    scanf("%c", &str);
    scanf("%d", &num);
    scanf("%s", p);

    printf("str = %c\n", str);
    printf("num = %d\n", num);
    printf("p = %s\n", p);
    return 0;
}
