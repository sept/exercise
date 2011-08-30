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
//    char *p = NULL;
//    p = a;
    int i = 0;
    int j = 0;

/*    while (a[i] != '\0')
    {
        p++;
        i++;
    }
    printf("%d\n", i);

*/  if (i == 1) 
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
/**************************************
函数：itoa()
功能：将整形数据存入字符型数组
输入参数：整形数据 和 存入的字符型数组
返回值：0
**************************************/
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
    p = '\0';
    return 0;
}
int main(int argc, const char *argv[])
{
    int i = 0;
//    int start = 0;
//    int end = 0;
    char num[10];
    memset(num, 0, sizeof(num));
/*    printf("please input a number for start\n");
    scanf("%d", &start);
    printf("please input a number for end\n");
    scanf("%d", &end);

    printf("%2d %2d\n", start, end);
*/
    for (i = 100; i < 200; i++)
    {
        itoa(i, num);
    //    printf("%s", num);
        sprintf(num, "%d", i > 0 ? i : -i);      //sprintf 以“%d”格式存入数组中 这样解决了-x加反成为+x问题
    //    printf(judge(num)? "回文数%3d" : "%3d", i);
        if (1 == judge(num)) 
        {
            printf("回文数%3d", i);
        }
    }

 //   printf("please input a number\n");
 //   scanf("%d", &start);
    printf("\n");
    return 0;
}

