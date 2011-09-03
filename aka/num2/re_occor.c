/**********************************
找出输入参数值中重复的数据并打印出
*********************************/
#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[])
{
    if (argc != 2) 
    {
        printf("error input ./a.out a\n");
        exit(-1);
    }
    char *ptr = argv[1];
    char *temp = argv[1];

    for (; *temp != '\0' ; temp++)
    {
        if (*temp == -1)
        {
            continue;
        }    
        ptr = temp;
        while (*ptr != '\0')
        {
            ptr++;
            if (*temp == *ptr) 
            {
                printf("重复的有%c\n", *temp);
                *ptr = -1;
            }
        }
    }

    return 0;
}
