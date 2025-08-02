#include <stdio.h>

int main(void)
{
	int number1, number2, buf;
	scanf("%d %d", &number1, &number2);
	if (number1 > number2)
	{
		buf = number1;
		number1 = number2;
		number2 = buf;
	}
	while (number2)
	{
		buf = number2;
		number2 = number1 % number2;
		number1 = buf;
	}
	printf("%d\n", number1);
	return 0;
}
