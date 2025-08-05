#include <stdio.h>

int main()
{
	int number = 0, a = 1, b = 0, c;
	scanf("%d", &number);
	for (int i = 0; i  < number; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d ", c);		
	}
	return 0;
	
}
