#include <stdio.h>

int main(int argc, char *argv[])
{
    int a[5][5] =  {{1,2,3,4,5},
                    {5,6,7,8,9},
                    {1,3,5,7,9},
                    {2,4,6,8,0},
                    {3,6,9,1,2}};
    int i = 0;
    int j = 0;
    int temp = 0;

    for (i = 0; i < 5; i++)
    {
        j = i;
        for (; j < 5; j++)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
        
    return 0;
}
