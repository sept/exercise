#include<stdio.h>
int itoa(int num, char a[])
{
    char *p = NULL;
    int i = 0;
    int j = 0;
    char b[] = "0";
    p = b;

    while(num > 0)
    {
        b[i] = (num%10) + '0';
        num = num/10;
        i++;
    }
    while (*p != '\0')
    {
        p++;
    }
    p--;
    for(j = 0; j < i; j++)    
    {
        a[j] = *p;
        p--;
    }
    return 0;
}
int main(int argc, const char *argv[])
{
    int num = 0;
    char a_num[10] = "0";
    printf("input a integer:\n");
    scanf("%d", &num);
    itoa(num, a_num);
    printf("%s\n", a_num);
    return 0;
}
