#include <stdio.h>

int main(void)
{
	int number, lastDigit = 0, min = 9, max =0;
	scanf("%d", &number);
	while (number)
	{
		lastDigit = number % 10;
		number /= 10;
		min = lastDigit < min ? lastDigit : min;
		max = lastDigit > max ? lastDigit : max;
	}
	printf("%d %d\n", min, max);
    return 0;
}
