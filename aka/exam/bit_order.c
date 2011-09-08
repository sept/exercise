#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void init_array(int *c)
{
    int i = 0;
    srand(time(NULL));
    for (i = 0; i < 6; i++)
    {
        c[i] = rand()%16;
        printf("%3d", c[i]);
    }
    printf("\n");

}
int *judge_bit(unsigned int *a)
{
    int mask = 1;
    int num,i,j,temp;
    int counter[6] = {0};

    for (i = 0; i < 6; i++)
    {
        j = 0;
        num = a[i];
        while (j < 8)
        {
            if ((num & mask) == 1)
            {
                counter[i]++;
            }
            num >>= 1;
            j++;
        }
            printf("%3d", counter[i]);
    }
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (counter[j] > counter[j+1]) 
            {
                temp = counter[j];
                counter[j] = counter[j+1];
                counter[j+1] = temp;
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
            if ((counter[j] == counter[j+1]) && (a[j] > a[j+1])) 
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    return a;
}
int main(void)
{
    unsigned int a[6];
    int i = 0;
    int *p = NULL;
    init_array(a);
    p = judge_bit(a);
    for (i = 0; i < 6; i++)
    {
        printf("%3d", p[i]);
    }
    printf("\n");
    return 0;
}
