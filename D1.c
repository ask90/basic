#include <stdio.h>

void printNumber(int number)
{
	if (number > 1) printNumber(number - 1);
	printf("%d ", number);
}

int main (void)
{
	int num;
	scanf("%d", &num);
	printNumber(num);
	return 0;
}
