#include <stdio.h>

int main(void)
{
	int number, lastDigit = 0, preDigit = 0;
	scanf("%d", &number);
	while (number)
	{
		lastDigit = number % 10;
		preDigit = number % 100 / 10; 
		number /= 10;
		if (lastDigit <= preDigit)
		{
			printf("NO\n");
			goto skip;
		}
	}
	printf("YES\n");
skip:
    return 0;
}
