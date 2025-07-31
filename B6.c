#include <stdio.h>

int main(void)
{
	int number, sum = 0;
	scanf("%d", &number);
	while (number)
	{
		sum += number % 10; 
		number /= 10; 
	}
	printf("%d\n", sum);
    return 0;
}


