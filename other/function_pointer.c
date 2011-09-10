#include <stdio.h>

int foo(int num)
{
	printf("%d\n", num);
	return 0;
}
int main()
{
	int i = 0;
	int (*p[10])(int) = {foo};
	while (p[i] != NULL)
	{
		p[i](i);
		i++;
	}
	return 0;
}
