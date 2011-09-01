#include <stdio.h>
#define M 20
int main(int argc, char *argv[])
{
    char a[M];
    char *p = a;

    printf("enter a date (mm/dd/yyyy):\n");
    fgets(a, sizeof(a), stdin);
    

    return 0;
}
