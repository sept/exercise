#include<stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct 
{
	char name[20];
	int num;
	char sex;
	int score;
}STU;

void name_s(STU student)
{
	printf("name : %s\n", student.name);
}
void number_s(STU student)
{
	printf("number : %d\n", student.num);
}
void sex_s(STU student)
{
	printf("sex : %c\n", student.sex);
}
void score_s(STU student)
{
	printf("score : %d\n", student.score);
}
int main(int argc, const char *argv[])
{
	STU student;
	int temp = 0;
	char buf[100];
	void (*p[4])(STU student) = {name_s, number_s, sex_s, score_s};
//   void  指针返回类型
	printf("input a name :\n");
	fgets(buf, sizeof(buf), stdin);
	buf[strlen(buf)-1] = '\0';
	strcpy(student.name, buf);
	//	printf("%s\n", student.name);
	printf("input the number : \n");
	fgets(buf, sizeof(buf), stdin);
	buf[strlen(buf)-1] = '\0';
	student.num = atoi(buf);
	printf("input the sex of this student (just for 'm' or 'w')\n");
	fgets(buf, sizeof(buf), stdin);
	if ((strlen(buf)-1) != 1)
	{
		printf("error to input sex\n");
		exit(0);
	}
	if (buf[0] != 'm' && buf[0] != 'w')
	{
		printf("error input to 'm' or 'w'\n");
		exit(0);
	}
	student.sex = buf[0];
	printf("input the student's score:\n");
	fgets(buf, sizeof(buf), stdin);
	buf[strlen(buf)-1] = '\0';
	student.score = atoi(buf);

	while(1)
	{
		printf("please input choice for check: 0,name\t1,number\t2,sex\t3,ID\t4,exit\n");
		fgets(buf, sizeof(buf), stdin);
		buf[strlen(buf)-1] = '\0';
		temp = atoi(buf);
		if (temp == 4)
		{
			exit(0);
		}
		p[temp](student);
	}

	return 0;
}
