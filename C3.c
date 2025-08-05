#include <stdio.h>

int middle(int a, int b)
{
	return (a + b) / 2;
}

int main ()
{
	int number1, number2;	
	scanf("%d %d", &number1, &number2);
	printf("%d\n", middle(number1, number2));
	return 0;
}

