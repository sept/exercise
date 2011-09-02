/********************************
找出输入参数数值之的间所有素数
*********************************/
#include <stdio.h>
#include <stdlib.h>

int judge_prime(int num)
{
    int i = 0;

    for (i = 2; i < num/2; i++)
    {
        if (num%i == 0) 
        {
            return 0;
        }
    }
    return 1;
}

int find_prime(int a, int b)
{
    int i = 0;

    for (i = a; i <= b; i++)
    {
        if (1 == judge_prime(i)) 
        {
            printf("%5d", i);
        }
    }
    printf("\n");
    return 0;
}
int main(int argc, char *argv[])
{
    if (argc != 3) 
    {
        printf("error input ./a.out\n");
        exit(-1);
    }
    int start = atoi(argv[1]);
    int end = atoi(argv[2]);
    printf("%d到%d 之间的素数为:\n", start, end);
    find_prime(start, end);
    
}
