#include<stdio.h>
#include <stdlib.h>
/*
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
*/
int init_arr(int *a)
{
    int i = 0;

    for (i = 0; i < 10; i++)
    {
        a[i] = i;
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

    for (i = 0; i < 10; i++)
    {
       while (a[i]%2 != 0) 
       {
           temp = a[i];
           a[i] = a[j];
           a[j] = temp;
           j--;
       }
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
