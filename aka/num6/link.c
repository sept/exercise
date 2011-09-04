#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    unsigned id;
    char name[20];
    struct student *next;

}stu;

stu *creat_link(stu *p)
{
    stu *head = NULL;
    head = p;
    int i = 0;
    p = head = malloc(sizeof(stu));
    if (p == NULL) 
    {
        perror("mallo failed");
        exit(-1);
    }
    p->id = 1;
    strcpy(p->name, "aaa");
    p->next = NULL;

    for (i = 1; i < 5; i++)
    {
        p->next = malloc(sizeof(stu));
        if (p->next == NULL) 
        {
            perror("malloc failed");
            exit(-1);
        }
        p->next->id = i+1;
        strcpy(p->next->name, "aaa");
        p->next->next = NULL;
        p = p->next;
    }

    return head;
}

stu *delete_link(stu *p)
{
    stu *head = p;
    char temp[10];
    int k = 0;
    stu *de = NULL;

    printf("please input a number to delete \n");
    fgets(temp, sizeof(temp), stdin);
    temp[strlen(temp)-1] = '\0';
    k = atoi(temp);

    if (k == head->id) 
    {
        head = p->next;
        free(p);
        p = p->next;
    }
    while (k > p->next->id) 
    {
        p = p->next;
    }
    if (p->next == NULL) 
    {
        printf("no match.\n");
        exit(-1);
    }
    de = p->next;
    p->next = p->next->next;
    free(de);

    return head;
}

void print_link(stu *p)
{
    while (p != NULL)
    {
        printf("%d, %s\n", p->id, p->name);
        p = p->next;
    }
}

int main(void)
{
    stu *p = NULL;
    p = creat_link(p);
    print_link(p);
    p = delete_link(p);
    print_link(p);
    return 0;
}
