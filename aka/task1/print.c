#include <stdio.h>

int main(int argc, char *argv[])
{
    int a = 7;
    int b = 100;
    char *p;
    int *s;
    int c = 27;
    float d = 12.123456;
    int e[] = {'a','\0'};
    char f[100]="abc";
    int g[100]={1};

/*    printf("%d\n", a);
    printf("%x\n", a);
    printf("%x\n", b);
    printf("%x\n", c);
    printf("%6.4f\n", d);
    printf("%d\n", e[0]);
    printf("%d\n", e[1]);
*/  printf("sizeof(a) = %d\n", sizeof(a));
    printf("sizeof(f) = %d\n", sizeof(f));
    printf("sizeof(g) = %d\n", sizeof(g));
    printf("sizeof(e) =%d\n", sizeof(e));
    printf("sizeof(p) =%d\n", sizeof(p));
    printf("sizeof(s) =%d\n", sizeof(s));
    return 0;
}

