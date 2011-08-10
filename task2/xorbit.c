/************************************
将原整数每位左右两位按异或后得到新的整数
*************************************/
#include<stdio.h>
int main(int argc, const char *argv[])
{
    int num = 0xffffffff;
    int i;
    int array[32] = {0};               /*定义数组存入原整数二进制形式*/
    int b[32] = {0};                   /*存放新生成的整数的二进制形式*/
    int mask = 1;                      /*掩码 为了将十六进制输出二进制形式*/

    for (i = 0; i < 32; i++)          /*先将原整数输出成二进制形式存放在数组中*/
    {
       array[i] = (num >> (31 - i)) & mask;
   //   printf("%d",array[i]);
    }

    for (i = 0; i < 32; i++)
    {
        if (i == 0 || i == 31)        /*将第一位和最后一位保持不变*/
        {
            b[i] = array[i];
        }
        b[i + 1] = array[i] ^ array[i + 2];   /*输出新的二进制由原二进制左右两位异或得到*/
        printf("%d",b[i]);
    }

    printf("\n");
    return 0;
}
