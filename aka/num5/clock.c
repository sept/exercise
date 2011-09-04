/*模拟数字时钟*/
/*待完成 ~,~*/
#include<stdio.h>
int main(void)
{
    char (*array)[3] ={0};
//    char *p = array;
    int i = 0;

     for (i = 0; i < 60; i++)
     {
         (*array)[2] += 1;
         sleep(1);
         printf("%3d", (*array)[2]);
     }

    return 0;
}
