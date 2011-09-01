#include<stdio.h>
int main(int argc, const char *argv[])
{
    int i = 0;
    int a[] = {6,7,8,9,10};
    int *ptr = a;

    fprintf(stderr,"%d,%p,%d, %p\n", *ptr,ptr, *ptr++, ptr);   
    //    printf 函数 是自右向左 运行            
    for (i = 0; i < 5; i++)   
    {
        printf("%p\n", &a[i]);   
    }
    return 0;
}
