/*根据结构体数组中分数的高低排序结构体数组*/
#include <stdio.h>

typedef struct student
{
    unsigned short id;
    char name[20];
    int score;
}STU;

void sort_link(STU *link)
{
    int i,j;
    STU temp;

    for (i = 0; i < 5; i++)
    {
        for (j = i+1; j < 5; j++)
        {
            if (link[i].score < link[j].score) 
            {
                temp = link[i];
                link[i] = link[j];
                link[j] = temp;
            }
        }     
    }

}

void print_link(STU *link)
{
    int i = 0;

    for (i = 0; i < 5; i++)
    {
        if (i < 3) 
        {
            printf("id :%d name :%s score :%d  pass\n",link[i].id, link[i].name, link[i].score);
        }
        else
            printf("id :%d name :%s score :%d  fail\n",link[i].id, link[i].name, link[i].score);
    }


}

int main(void)
{
    STU link[5] = {{21, "wang", 90},                
               {31, "feng", 80},
               {10, "lin", 93},
               {30, "huang", 83},
               {41, "zhong", 81}};
    sort_link(link);
    print_link(link);

    return 0;
}
