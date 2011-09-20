#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int creat_num(int *a)
{
    int i = 0;
    int temp = 0;
    int flag[10] = {0};

    srand(time(NULL));
    while (i < 4)
    {
        temp = rand()%10;
        if (flag[temp] == 0) 
        {
            a[i] = temp + '0';
            //      printf("%5d", a[i]-'0');
            i++;
            flag[temp] = 1;
        }

    }
    printf("\n");
    return 0;
}

int judge_num(int *ptr)
{
    int flag = 0;
    char buf[10];
    int i,j;
    int A = 0;
    int B = 0;
    pid_t pid;

    pid = fork();
    if (pid > 0) 
    {
        sleep(40);
        printf("sorry failed~!\n");
        exit(-1);
    }
    else if (pid == 0)
    {
        while (flag < 5)
        {
            A = 0;
            B = 0;
        be: printf("please input four numbers from 0 to 9\n");
            fgets(buf, sizeof(buf), stdin);
            buf[strlen(buf)-1] = '\0';
            if (strlen(buf) != 4) 
            {
                printf("error input~!\n");
                continue;
            }
            for (i = 0; i < 4; i++)
            {
                if (buf[i] < '0' || buf[i] > '9') 
                {
                    printf("please input numbers\n");
                    goto be;
                }
                for (j = i+1; j < 4; j++)
                {
                    if (buf[i] == buf[j]) 
                    {
                        printf("error ~! input \n");
                        goto be;
                    }
                }
            }
            for (i = 0; i < 4; i++)
            {
                //   printf("a[i]=%d b[i] = %d\n", ptr[i], buf[i]);
                if (ptr[i] == buf[i]) 
                {
                    A++;  
                }
            }
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    if (ptr[i] == buf[j]) 
                    {
                        B++;
                    }
                }
            }
            printf("%dA%dB\n", A, B);
            if (A == 4) 
            {
                printf("congratulations ~!\n");
                exit(1);
            }
            flag++;
        }    
    }

    return 0;
}
int main(int argc, char *argv[])
{
    int array[4];
    creat_num(array);
    judge_num(array);

    return 0;
}
