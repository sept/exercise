#include <stdio.h>

int init_array(int *a)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        a[i] = i + 10;
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
int main(int argc, char *argv[])
{
    int a[10];
    init_array(a);
    reverse_array(a);

}
