/************************************
找出1到1000内所有完数
*************************************/
#include<stdio.h>
int main(int argc, const char *argv[])
{
    int i;                                /*循环变量*/
    int j;                                /*循环变量*/
    int addnum = 0;                       /*因子数之和*/

    for (i = 1; i < 1000; i++)
    {
        addnum = 0;                        /*每次循环不同的数将因子和清零*/
        for (j = 1; j <= i / 2 ; j++)      /*使被除数不大于除数的一半即可*/  
        {
            if (i % j == 0)                
            {
                addnum = addnum + j;       /*循环递加所有因子之和*/
            }
        }
        if (addnum == i)                   /*因子之和与判断的数相等 即为完数*/
        {
            printf("1到1000的完数为：%5d\n",i);
        }
    }
    printf("\n");
    return 0;
}

