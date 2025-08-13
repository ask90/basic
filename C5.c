#include <stdio.h>
int summering(int lastNum)
{
	int sum = 0;
	for (int i = 1; i <= lastNum; i++)
	{
		sum += i;
	}
	return sum;
}

int main ()
{
	int num;
	scanf("%d", &num);
	printf("%d\n", summering(num));
	return 0;
}
