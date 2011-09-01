#include <stdio.h>

int init_array(int *a)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        a[i] = i;
        printf("%5d", a[i]);
    }
    printf("\n");

    return 0;
}
int reverse_array(int *a)
{
    int *p = &a[9];

    
    while (p >= a)
    {
        printf("%5d",*p);
        p--;
    }
    *p = '\0';
    printf("\n");
    return 0;
}

int add_array(int *a)
{
    int temp = 0;
    int i = 0;

    for (i = 0; i < 10; i++)
    {
        temp += a[i];
    }
    return temp;
}

int main(int argc, char *argv[])
{
    int a[10];
    int add = 0;
    init_array(a);
    reverse_array(a);
    add = add_array(a);
    printf("数组元素和为%d\n", add);


}
