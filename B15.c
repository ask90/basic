#include <stdio.h>

int main(void)
{
	int number, prevNumber = ' ';
	int i = 0;
	while (((number = getchar()) != '0') || (prevNumber != ' '))
	{
		if (number == ' ' && (prevNumber % 2) == 0)
		{
			i++;
		}
		prevNumber = number;
	}
	printf("%d\n", i);
	return 0;
}
