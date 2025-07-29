#include <stdio.h>

int main()
{
	int num, a = 0, b = 0, c = 0, max = 0; // num -> abc
	scanf("%3d", &num);
	c = num % 10;
	b = num / 10 % 10;
	a = num / 100 %10;
	max = a > b ? a : b;
	max = max > c ? max : c;
	printf("%d\n", max);
	return 0;
}

