#include <stdio.h>

int main(void)
{
	char number, prevNumber = ' ';
	int i = 0;
	while (((number = getchar()) != '0') || (prevNumber != ' '))
	{
		if (number == ' ')
		{
			i++;
		}
		prevNumber = number;
	}
	printf("%d\n", i);
	return 0;
}
