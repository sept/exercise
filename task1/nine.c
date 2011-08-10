/**********************************
找出输入两个参数之间所有包含9的个数
**********************************/
#include <stdio.h>
#include <stdlib.h>

int input_num(int *b)            /*从键盘输入一个参数*/
{
    printf("input a number:\n");
    scanf("%d", b);              
}

int find_nine(int c)            /*先找出该参数本身中包含9的个数*/
{
    int temp = 0;               /*存入余数的值*/
    int cout = 0;               /*累计9的个数*/
    while (c > 0)
    {
        temp = (c % 10);
        if (temp == 9) 
        {
            cout++;      
        }
        c = c / 10;              /*判断输入参数的各个位上的值是否为9*/
    }
    return cout;                 /*返回累计9的个数*/
}

int all_nine(int i,int c)
{
    int cout = 0;
    int temp = 0;
    
    for (; i < c; i++)             /*i的值可任意设置 小于输入参数的值*/
    {
        cout = cout + find_nine(i);  /*调用find_nine函数,即循环判断介于i与输入参数之间的所有数*/
    }

    return cout;                   /*返回全部累计9的个数*/
}

int main(int argc, const char *argv[])
{
    int a = 0;
    int b = 0;
    int num = 0;
    input_num(&num);              
    a = find_nine(num);                 /*返回find_nine的值即cout的值 保存在a中*/
    b = all_nine(0, num);                /*保存在b中*/
  /*b = all_nine(100, 200)*/             /*即可任意输入需要的起始和终止位置*/

    printf("%d\n",a+b);                 /*打印所有包含9的个数*/
}
