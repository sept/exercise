#include <stdio.h>
#include <stdlib.h>
#define M 10000 
/**************************
函数：init_array()
功能：初始化一维数组
传入参数：整形数组
返回值：0
***************************/
int init_array(int *a)
{
    int i = 0;

    srand(time(NULL));
    for (i = 0; i < M; i++)
    {
        a[i] = rand()%100;
    }
    return 0;
}
int print_array(int *a)
{
    int i = 0;

    for (i = 0; i < M; i++)
    {
        if (i%5 == 0) 
        {
            printf("\n");
        }
        printf("%5d", a[i]);
    }
    printf("\n");
    return 0;
}
/****************************
函数：bubble_sort()
功能：冒泡排序法
传入参数：整形数组
返回值：0
****************************/
int bubble_sort(int *a) 
{
    int i = 0;
    int j = 0;
    int temp = 0;

    for (i = 0; i < M; i++)
    {
        for (j = i+1; j < M; j++)
        {
            if (a[i] < a[j]) 
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    return 0;
}
/************************
函数：choice_sort（）
功能：选择排序法
传入参数：整形数组
返回值：0
************************/
int choice_sort(int *a)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int temp = 0;

    for (i = 0; i < M; i++)
    {
        k = i;
        for (j = i+1; j < M; j++)
        {
            if (a[i] > a[j]) 
            {
                k = j;
            }
        }
        temp = a[k];
        a[k] = a[i];
        a[i] = temp;
    }
    return 0;
}
int main()
{
    int a[M];
    init_array(a);
    printf("原始顺序为：");
    print_array(a);
    getchar();
    bubble_sort(a);
    printf("冒泡法排列后为(从大到小)：");
    print_array(a);
    getchar();
    printf("选择法排序为（从小到大）：");
    choice_sort(a);
    print_array(a);
    return 0;
}
