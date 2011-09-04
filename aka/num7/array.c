/*将一产生随机数的数组中偶数元素和奇数元素分开*/
/*有bug 待提高。。。。*/
#include<stdio.h>
#include <stdlib.h>

int init_arr(int *a)
{
    srand(time(NULL));
    int i = 0;

    for (i = 0; i < 10; i++)
    {
        a[i] = rand()%50;
        printf("%5d", a[i]);
    }
    printf("\n");
    return 0;
}


int order_arr(int *a)
{
    int i = 0;
    int temp = 0;
    int j = 9;

    while (j >= i)
    {
        while (a[j]%2 != 1)
        {
            j--;
        }
        while (a[i]%2 != 0) 
        {
            i++;
        }
       temp = a[i];
       a[i] = a[j];
       a[j] = temp;
       i++;
       j--;
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}

int main(int argc, const char *argv[])
{
    int array[100];
    init_arr(array);
    order_arr(array); 

    return 0;
}
