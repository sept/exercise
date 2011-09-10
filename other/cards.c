#if 0
#include<stdio.h>
#include <stdlib.h>
int rank(int (*a)[13])
{
	int i = 0;
	for(i = 0; i < 52; i++)
	{
		if (i%13 == 0)
		{
			printf("\n");
		}
		printf("%4d", a[0][i]);
	}
	return 0;
}
int init(int (*a)[13])
{
	int i = 0;
	srand(time(NULL));
	for (i = 0; i < 52; i++)
	{
		a[0][i] = rand()%(14);
	}
	return 0;
}
int main(int argc, const char *argv[])
{
	int a[4][13];
	init(a);
	rank(a);

	printf("\n");
	return 0;
}
#endif

#if 1
#include<stdio.h>
#include <stdlib.h>
/************************************
函数：init_cards()
功能：随机输出0到51之间不重复的52个数
	即洗牌的过程
传入参数：整型二维数组
返回值：0
**************************************/
int init_cards(int (*p)[13])
{
	int flag[52] = {0};
	int num = 52;
	int temp;
	int *q = (int *)p;

	srand(time(NULL));
	while (num > 0)
	{
		temp = rand()%52;
		if (flag[temp] == 1)
			continue;
		else
		{
			flag[temp] = 1;
			*q = temp;
			q++;
			num--;
		}
	}
	return 0;
}
/**************************************
函数：print_cards()
功能：将初始化不重复的数分发给四份
	即完成发牌的过程
输入参数：整型二维数组
返回值：0
****************************************/
int print_cards(int (*p)[13])
{
	int *q = (int *)p;
	int i;

	for (i = 0; i < 52; i++, q++)
	{
		if(i%13 == 0)
			printf("\n");
		printf("%3d", *q);		
	}
	return 0;
}

int main(void)
{
	int a[4][13];
	init_cards(a);
	print_cards(a);
	printf("\n");
	return 0;
}
#endif
