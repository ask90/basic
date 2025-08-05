#include <stdio.h>

int main(void)
{
	int number;
	while ((number = getchar()) != '.')
	{
		//printf("%d ", number); 
		if (number > 64 && number < 91)
		{
			number += 32;
		}
	putchar(number);
	}
	
	return 0;
}
