/*通过指针赋值输出结构体成员的结果*/
/*待理解。。。。*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[20];
    int age;
    double record;
}stu;

int main(void)
{
    stu *p;
    char buf[100];

    printf("please input name, age, record\n");
    fgets(buf, sizeof(buf), stdin);
    buf[strlen(buf) - 1] = '\0';
    strcpy(p->name, buf);
    printf("name : %s\n", p->name);

    return 0;
}
