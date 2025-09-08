#include <stdio.h>

void printDigit(int number)
{
	if (number > 9) printDigit(number / 10);
	printf("%d ", number % 10);
}

int main ()
{
	int num;
	scanf("%d", &num);
	printDigit(num);
	return 0;
}
