/*****************************
约瑟夫环问题
使用数组、循环
*****************************/
#if 0 
#include<stdio.h>
#define n 10
int main(int argc, const char *argv[])
{
    int i = 0;                     /*循环变量*/
    int interval = 3;              /*游戏的间隔变量数*/      
    int counter = 0;               /*数间隔数的变量*/
    int array[n] = {0};            /*定义数组n 所有数都为0 方便使用状态位*/
    int retain_num = 0;            /*游戏过程中出局人数变量*/
    
    for (i = 0;retain_num < n - 1; i++)
    {
        if (i % n == 0)            /*判断i是否于n 相等 则使下标恢复0 即完成游戏循环*/     
        {
            i = 0;
        }

        if ((array[i] == 0) && (counter == interval))    /*判断数数与间隔数相等并数组内容为0*/
        {
             counter = 0;                                /*清零*/
             printf("%3d(out)\n",i + 1);                 /*输出出局的数组中的下标*/
             array[i] = -1;                              /*并标记出局的为-1*/
             retain_num++;                               /*出局人数加1*/
        }

        if(array[i] == 0)                                /*未到间隔数*/
        {
            counter++;         
            printf("%3d",i + 1);
        }
    }
    for(i = 0;i < n; i++)                                 /*上个循环结束即出局人数为n-1时 扫描数组内所有的内容*/
    {
        if (array[i] == 0)                                /*必有一个为0 即为游戏结束剩余最后一个*/
        {
            printf("the last number is :%d\n",i + 1);
        }
    }

    return 0;
}
#endif

#if 1 
#include<stdio.h>
int main(int argc, const char *argv[])
{
    start_game(3, 10);
    return 0;
}

int start_game(int interval, int n)
{
    int i;
    int counter = 0;               /*数间隔数的变量*/
    int array[n] = {0};            /*定义数组n 所有数都为0 方便使用状态位*/
    int retain_num = 0;            /*游戏过程中出局人数变量*/
    
    for (i = 0;retain_num < n - 1; i++)
    {
        if (i % n == 0)            /*判断i是否于n 相等 则使下标恢复0 即完成游戏循环*/     
        {
            i = 0;
        }

        if ((array[i] == 0) && (counter == interval))    /*判断数数与间隔数相等并数组内容为0*/
        {
             counter = 0;                                /*清零*/
             printf("%3d(out)\n",i + 1);                 /*输出出局的数组中的下标*/
             array[i] = -1;                              /*并标记出局的为-1*/
             retain_num++;                               /*出局人数加1*/
        }

        if(array[i] == 0)                                /*未到间隔数*/
        {
            counter++;         
            printf("%3d",i + 1);
        }
    }
    for(i = 0;i < n; i++)                                 /*上个循环结束即出局人数为n-1时 扫描数组内所有的内容*/
    {
        if (array[i] == 0)                                /*必有一个为0 即为游戏结束剩余最后一个*/
        {
            return i+1;
        }
    }
    if (array[i] == 0) 
    {
        printf("%d\n",i + 1);
    }

    return 0;
}
    
#endif
