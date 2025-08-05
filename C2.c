#include <stdio.h>

int power(int n, int p)
{
	int mul = 1;
	for (int i = 0; i < p; i++)
	{	
		mul *= n;
	}
	return mul;
}

int main ()
{
	int number1, number2;	
	scanf("%d %d", &number1, &number2);
	printf("%d\n", power(number1, number2));
	return 0;
}

