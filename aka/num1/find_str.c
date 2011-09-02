#include <stdio.h>
#include <stdlib.h>
/**********************************
函数：judge()
功能：判断字符串中是否有子字符串
传入参数：字符串与子字符串
返回值：1 含有相同的子字符串
        0 与子字符串不匹配
**********************************/
int judge(char *ptr, char *dest)
{
    while (*dest != '\0')
    {
        while (*ptr != *dest)
        {
            return 0;
        }
        ptr++;
        dest++;
    }

    return 1;
}
/***********************************
函数：counter()
功能：找出与子字符串相同的个数
返回值：counter 相同的个数
传入参数：字符串与子字符串
************************************/
int counter(char *ptr, char *dest)
{
    int counter = 0;

    if (*ptr == '\0' || *dest == '\0') 
    {
        return counter;
    }

    while (*ptr != '\0')
    {
        if (1 == judge(ptr, dest)) 
        {
            counter++;
        }
        ptr++;
    }

    return counter;
}
/********************************
从命令行传入参数
*********************************/
int main(int argc, char *argv[])
{
    if (argc != 3) 
    {
        printf("error to input  ./a.out a b\n");
        exit(-1);
    }
    int num = counter(argv[1], argv[2]);
    printf("%d\n", num);
    return 0;
}
