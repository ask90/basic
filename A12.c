#include <stdio.h>

int main()
{
	int num, a = 0, b = 0, c = 0; // num -> abc
	scanf("%3d", &num);
	c = num % 10;
	b = num / 10 % 10;
	a = num / 100 %10;
	printf("%d\n", (a + b + c));
	return 0;
}

