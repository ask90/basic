#include <stdio.h>

int sumToNumber(int number)
{
	static int sum = 0;
	if (number > 1) sumToNumber(number - 1);
	sum += number;
	return sum;
}

int main ()
{
	int num, sum;
	scanf("%d", &num);
	printf("%d\n", sum = sumToNumber(num));
	return 0;
}
