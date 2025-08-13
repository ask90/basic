#include <stdio.h>

// с6 для старта
unsigned long chessCorn(unsigned int lastNum)
{
	unsigned long mul = 1;
	for (int i = 1; i < lastNum; i++)
	{
		mul *= 2;
	}
	return mul;
}

int main ()
{
	unsigned int num;
	scanf("%d", &num);
	printf("%lu\n", chessCorn(num));
	return 0;
}
