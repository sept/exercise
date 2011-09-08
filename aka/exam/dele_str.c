#if 0 
#include <stdio.h>

int delete_char(char *str, char dest)
{
    int i = 0;
    char *temp = NULL;

    while (*str != '\0')
    {
        if (*str == dest) 
        {
            temp = str;
            for (;*temp != '\0';temp++)
            {
                *temp = *(temp+1);
            }
            *temp = '\0';
        }
        str++;
    }
    printf("%s\n", str);
    return 0;
}

int main(void)
{
    char str[] = "hello hello hell";
    char dest = 'o';
    
    delete_char(str, dest);
    return 0;
}
#endif

#if 1
/***************************************
实现字符串中的子字符删掉
*****************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *dele_str(char *str, char *ptr)
{
   int i = 0;
   int k = 0;
   int tmp = strlen(str);

    for (i = 0; i < tmp; i++)
    {
        if (str[i] == *ptr) 
        {
            k = i;
            for (; k < tmp; k++)
            {
                str[k] = str[k+1];  

            }
            str[k]='\0';
        }
    }
    return str;
}
int main(int argc, char *argv[])
{
    if (argc != 3) 
    {
        printf("please input a string and a character\n");
        exit(-1);
    }
    char *buf;
    buf = dele_str(argv[1],argv[2]);
    printf("%s\n", buf);
    return 0;
}
    
#endif
