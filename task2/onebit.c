/***********************************
计算16进制数中1位的个数
************************************/
#include<stdio.h>
int main(int argc, const char *argv[])
{
    int i = 0;                            /*循环变量*/
    int num = 0x448899aa;                 /*需要查找的数*/
    int mask = 0x01;                      /*掩码*/
    int counter = 0;                      /*位数为一的个数*/

    for (i = 0; i < 31; i++)
    {
        if ((num >> i ) & mask == 1)     /*移动需要查找的数 固定掩码 在个位输出 即输出的数为1或0*/  
                             /* != 0 */
        {
            counter++;
        }
    }
    printf("1的位的个数为：%d\n",counter);
    return 0;
}
