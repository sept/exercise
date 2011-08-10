/********************************
按输入参数取出整数中间的位数 并取反输出
*********************************/
#include<stdio.h>
int main(int argc, const char *argv[])
{
    int num = 0x4488270a;
    int mask = 0x1;
    int print_bit = 0;                       
    int p1 = 2;
    int p2 = 4;
    int i ;


    for (i = 0; i <= (p2 - p1); i++)
    {
        if (p1 < 0 || p2 > 32)            /*判断传入参数是否有效*/
        {
            printf("error\n");
            break;
        }

        print_bit = (~(num >> p1 + i) & mask); /*移动输入整数后取反 再同掩码按位与取出相反的位*/
        printf("%4d",print_bit);
    }
    printf("\n");
    return 0;
}
