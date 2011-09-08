/*输入日期几月几日 输出是一年中的第几天
  注： 此处未考虑年份是否为闰年*/
#include <stdio.h>

int change_day(int num)
{
    int day = 0;
    int i;
    int mouth = num/100;
    int oday = num%100;

    for (i = 1; i < mouth; i++)
    {
        switch(i)
        {
            case 1: day += 31;break;
            case 2: day += 28;break;
            case 3: day += 31;break;
            case 4: day += 30;break;
            case 5: day += 31;break;
            case 6: day += 30;break;
            case 7: day += 31;break;
            case 8: day += 31;break;
            case 9: day += 30;break;
            case 10: day += 31;break;
            case 11: day += 30;break;
            case 12: day += 31;break;
            default : break;
        }
    }
    day += oday;
    printf("%d 月%d日 共计%d 天\n", mouth, oday, day);

    return 0;
}

int main(int argc, char *argv[])
{
    if (argc != 2) 
    {
        printf("please input ./a.out MMDD\n");
    }
    int mouth_day = atoi(argv[1]);
    change_day(mouth_day);
    return 0;
}
