/*将字符串中的大小写字母 互换*/
#include <stdio.h>

int main(int argc, char *argv[])
{
    char a[20] = "I Like This Game";
    char *p = a;
    int i = 0;

    while (*p != '\0')
    {
        if (*p < 'a' && *p != ' ') 
        {
            *p ='a' + (*p - 'A'); 
        }
        else if (*p >= 'a' && *p != ' ')
        {
            *p ='A' + (*p -'a');
        }
        p++;
    }

    for (i = 0; i < 17; i++)
    {
        printf("%c", a[i]);
    }
    printf("\n");
    return 0;
}
