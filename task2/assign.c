/*******************************
使某一位上的位为输入参数的值0/1
*******************************/
#if 0
#include<stdio.h>
int main(int argc, const char *argv[])
{
    unsigned int num = 0xffffffff;
    int p1 = 5;
    int v = 0;
    unsigned int print_num = 0;
    int i;
    int mask = (1 << 31);

    for (i = 0; i < 32; i++)
    {
        print_num = num & (mask >> i);
        if (i == 32 - p1)                  /*确定找到第p1位时*/
        {
            printf("%d",v);                /*赋予v的值*/
            continue;
        }

        printf("%c",print_num > 0 ? '1' : '0' );  /*与掩码1的结果 不是0 就使一个很大的数 即不为0*/
    }

    printf("\n");
    return 0;
}
#endif
#if 1

#include<stdio.h>
int main(int argc, const char *argv[])
{
    unsigned int num = 0xffffffff;
    change_bit(5, 0, num);
}
int change_bit(int p1, int v, int num)
{
    unsigned int print_num = 0;
    int i;
    int mask = (1 << 31);

    for (i = 0; i < 32; i++)
    {
        print_num = num & (mask >> i);
        if (i == 32 - p1)                  /*确定找到第p1位时*/
        {
            printf("%d",v);                /*赋予v的值*/
            continue;
        }

        printf("%c",print_num > 0 ? '1' : '0' );  /*与掩码1的结果 不是0 就使一个很大的数 即不为0*/
    }

    printf("\n");
    return 0;
}
    
#endif
