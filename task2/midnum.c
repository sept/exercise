/*****************************
按二进制输出输入整数中间几位
*****************************/
#if 1
#include<stdio.h>
int main(int argc, const char *argv[])
{
    int num = 0x4488270a;
    int mask = 0x1;
    int print_bit = 0;                       /*保存取出的位*/
    int p1 = 2;
    int p2 = 4;
    int i ;


    for (i = 0; i <= (p2 - p1); i++)
    {
        if (p1 < 0 || p2 > 32)              /*判断传入参数是否有效*/
        {
            printf("error\n");
            break;
        }

        print_bit = ((num >> p1 + i) & mask); /*移动输入整数 按位取出*/
        printf("%4d",print_bit);
    }
    printf("\n");
    return 0;
}
#endif

#if 0
#include<stdio.h>
int main(int argc, const char *argv[])
{
    
    int num = 0x4488270a;
    find_mid(4, 2, num);
    return 0;
}

int find_mid(int p2, int p1, int num)
{
    int mask = 0x1;
    int print_bit = 0;                       /*保存取出的位*/
    int i ;


    for (i = 0; i <= (p2 - p1); i++)
    {
        if (p1 < 0 || p2 > 32)              /*判断传入参数是否有效*/
        {
            printf("error\n");
            break;
        }

        print_bit = ((num >> p1 + i) & mask); /*移动输入整数 按位取出*/
        printf("%4d",print_bit);
    }
    printf("\n");
    return 0;
}

    
#endif
