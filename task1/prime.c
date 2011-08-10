/*******************************************
函数名: find_prime
功能 : 找出1到100内所有素数
日期 ： 2011-08-07
作者 ： 郭姣
*******************************************/
#include<stdio.h>
 
int find_prime(int i)
{
    int j;                       /*定义循环变量*/
    int counter = 0;             /*判断因子的数量*/  
    
    for (i = 1; i < 100; i++)    /*循环1到100之间的数*/
    {
        counter = 0;             /*数的每次递加 先使因子数清零*/
        for (j = 2; j <= i / 2; j++)   /*被除数（不包括1）不大于除数的一半 减少循环次数*/
        {
            if ((i % j) == 0)          /*判断是否为因子*/
            {
                counter++;
            }
        }
        if (counter == 0)              /*若无因子 则为素数*/
        {
             printf("%5d",i);
        }
    }
    printf("\n");
    return 0;
}

    
int main(int argc, const char *argv[])
{
    int n = 0;
    find_prime(n);

    return 0;
}
