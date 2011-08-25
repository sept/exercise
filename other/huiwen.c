#include<stdio.h>
#include <string.h>
/*************************************
函数：judge()
功能：判断是否为回文数
输入参数：需要判断数存入的数组
返回值： 1  是回文数
         0  非回文数
*************************************/
int judge(char a[])
{
    char *p = NULL;
    p = a;
    int i = 0;
    int j = 0;

    while (a[i] != '\0')
    {
        p++;
        i++;
    }
    printf("%d\n", i);

    if (a[0] == '-') 
    {
        a++;
    }
    if (i == 1) 
    {
        return 1;
    }
    if (a[0] == a[i-1]) 
    {
        for (j = 0; j <= i/2; j++)
        {
            if (a[0+j] != a[i-1-j]) 
                return 0;
        }
        return 1;
    }
    return 0;
}

int main(int argc, const char *argv[])
{
    int x = 0;
    char num[10];
    memset(num, 0, sizeof(num));
    printf("please input a number\n");
    scanf("%d", &x);
    sprintf(num, "%d", x > 0 ? x : -x);      //sprintf 以“%d”格式存入数组中 这样解决了-x加反成为+x问题
    printf(judge(num)? "是回文数\n" : "非回文数\n");

    return 0;
}

