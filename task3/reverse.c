#include<stdio.h>
int main(int argc, const char *argv[])
{
    char a[9] = "abcdefg";
    char *p;
    int i = 0;

    p = &a[9];                        /*指针指向最后一位*/

    while (*p == '\0')                /*最后一个应为结束符  进入循环*/
    {
        for (i = 0; i < 9; i++)
        {
            printf("%c", *p);        
            p--;
        }
    }
    *p = '\0';                        /*字符串打印完毕之后 加 \0 即为结束符号*/

    printf("\n");
    return 0;
}
