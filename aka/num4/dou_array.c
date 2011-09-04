/*函数strtok的用法 举例*/
#if 0

#include <string.h>
#include <stdio.h>

int main(void)
{
    char str[] ="This is a sample string just testing";
    char *pch;
    pch = strtok (str," ");
    while (pch != NULL)
    {
        printf ("%s\n",pch);
        pch = strtok (NULL, " ");
    }

    return 0;
}


#endif

/*************************************
作者赵攀攀，模仿shell拟写argc和argv
**************************************/
#if 0
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char source[128] =" bei jing huan  ying   nin!";
    int argc = 0;
    char *argv[16];
    char *str = source;

    int i = 0;

    /*跳过字符串最前面有空格的情况*/
    while (*str == ' ')
    {
        str++;
    }

    argv[i] = str;
    argc++;

    while (*str != '\0')
    {
        if (*str == ' ')
        {
            /*跳过中间有多个空格的情况*/
            while (*str == ' ')
            {
                str++;
            }

            /*检测字符串结束的情况*/
            if(*str == '\0')
            {
                break;
            }

            argc++;

            *--str = '\0';

            argv[++i] = ++str;

            continue;
        }

        str++;
    }

    printf("argc is %d\n", argc);

    for (i = 0; i < argc; i++)
    {
        printf("argv[%d] is: %s\n", i, argv[i]);
    }

    return 0;
}
#endif
/*****************************************
根据上文作者的代码
将一句英文存入一数组指针中 并分别输出
本来使用state状态位思想 但是使用不太巧妙
需再提高 
*****************************************/
#if 1 
#include <stdio.h>

int main(void)
{
    char ptr[30] = "  I  like  this  game";
    char *argv[4];
    int argc = 0;
    char *str = ptr;
    int i = 0;
 //   int state = 0;
/*处理开头空格*/
    while (*str == ' ')
    {
        str++;
    }
    argv[i] = str;
    argc++;
//    state = 1;

    while (*str != '\0')
    {
        if (*str == ' ')
        {
            while (*str == ' ') /*处理两个字符串中多个空格的情况*/
            {
                str++;
            }
//            state = 0;
            *str = '\0';        /*在一个字符串结束后并且所有空格之后加 ‘\0’ 结束标志*/
            str++;
            argv[++i] = str;     
            argc++;
//            state = 1;
        }

        str++;
    }
    printf("argc is %d\n", argc);

    for (i = 0; i < argc; i++)
    {
        printf("argv[%d] is: %s\n", i, argv[i]);
    }

    return 0;
}
#endif
