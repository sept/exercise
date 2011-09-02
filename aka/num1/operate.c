#include <stdio.h>
#include <stdlib.h>
/*******************************
实现加减乘除运算
********************************/
int main (int argc, char *argv[])
{
    if (argc != 3) 
    {
        printf("please input ./a.out a b\n");
        exit(-1);
    }
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int choice = 0;

    while (1)
    {
        printf("1, 加   2,减  3, 乘  4,除  5,取余 6,exit\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: printf("和为：%d\n", (a+b));continue;
            case 2: printf("差为 %d\n", (a-b));continue;
            case 3: printf("乘积为 %d\n", (a*b));continue;
            case 4: printf("整除为 %d\n", (a/b));continue;
            case 5: printf("取余为 %d\n", (a%b));continue;
            case 6: exit(-1);
            default :printf("error  input \n"); break;
        }
    }

    return 0;
}
