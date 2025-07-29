#include <stdio.h>

int main()
{
	int number1 = 0, number2 = 0;
	scanf("%d %d", &number1, &number2);
	if (number1 > number2)
		printf("Above\n");
	else if (number1 < number2)
		printf("Less\n");
	else
		printf("Equal\n");
	return 0;
}

