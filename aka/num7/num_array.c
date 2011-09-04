#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <inttypes.h>

void init_array(int *a)
{
    int i = 0;
    srand(time(NULL));
    a[0] = 0;
    a[1] = 1;
    for (i = 2; i < 10; i++)
    {
        a[i] = rand()%50;
    }
}

int change_array(int *a)
{
    int buf[10] = {0};
    int i = 0;

    buf[0] = 0;
    buf[1] = 1;
    for (i = 2; i < 10; i++)
    {
        if (i%2 == 0) 
        {
            buf[i] = abs(a[i-1] - a[i-2]);
        }
        else
        buf[i] = a[i-1] + a[i-2];
    }
    for (i = 0; i < 10; i++)
    {
        printf("%3d", buf[i]);
    }
    printf("\n");
    return 0;
}

void print_array(int *a)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%3d", a[i]);
    }
    printf("\n");
}

int main(void)
{
    int array[10];
    int *str;

    init_array(array);
    print_array(array);
    change_array(array);
//    print_array(str);
    return 0;
}
