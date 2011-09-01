#if 0 
#include <stdio.h>

int main()
{
    int i;
    int temp = 1;
    int str[100];

    for (i = 1; i <= 10; i++)
    {
        temp *= i;
    }

    printf("%d\n", temp);
    return 0;
}
#endif

#if 0 

#include<stdio.h>
int main(int argc, const char *argv[])
{
    int i = 0;
    int j = 0;
    int a[10];

    printf("\n");
    return 0;
}

#endif

#if 0 

#include <stdio.h>
int main(int argc, char *argv[])
{  
    int sum = 0;
    int temp = 5;   
    int num = atoi(argv[1]); 

    while (num >= temp)
    {
        sum += num/temp;
        temp *= 5;
    }
    printf("%d\n", sum);
    return 0;
}
#endif

#if 0

#include<stdio.h>
int main(int argc, const char *argv[])
{
    int i;
    int sum = 0;
    for (i = 1; i <= 31; i=i+2)
    {
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
    
#endif

#if 1

#include <stdio.h>

int main()
{
    int i,j,k;

    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 2-i; j++)
        printf("");
        for (k = 0; k <= 2*i; k++)
        printf("*");
        printf("\n");
    }
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= i; j++)
        printf("");
        for (k = 0; k <= 4-2*i; k++)
        printf("*");
        printf("\n");
    }
    return 0;
}
    
#endif
