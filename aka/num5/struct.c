/*从终端输入五个学生信息*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student 
{
    char name[20];
    int age;
    char sex;
}STU;

int main (void)
{
    char buf[100];
    int flag = 1;
    STU link;

    while (flag)
    {
        printf("please input a student's name,age,sex('m' or 'w') \n");
        fgets(buf, sizeof(buf), stdin);
        buf[strlen(buf)-1] = '\0';
        strcpy(link.name, buf);
        printf("name : %s\n",link.name);
        fgets(buf, sizeof(buf), stdin);
        buf[strlen(buf)-1] = '\0';
        link.age = atoi(buf);
        printf("age : %d\n",link.age);
        fgets(buf, sizeof(buf), stdin);
        buf[strlen(buf)-1] = '\0';
        if (strlen(buf) != 1) 
        {
            printf("error input the sex\n");
            exit(-1);
        }
        link.sex = buf[0];
        printf("sex :%c\n",link.sex);
        if (flag == 5) 
        {
            exit(0);
        }
        flag++;
   } 
    return 0;
}
