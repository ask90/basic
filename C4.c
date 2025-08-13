#include <stdio.h>
#include <math.h>

int function(int x)
{
	if (x < -2) return 4;
	else if (x >= 2) return x * x + 4 * x + 5;
	else return x * x;
}

int main ()
{
	int digits[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	char number, prevNumber = ' ';
	int max = 0, endNumber = 0;
	int i = 0, k = 0;
	int sign = 0;
	while (((number = getchar()) != '0') || (prevNumber != ' '))
	{
		prevNumber = number;
		if (number == ' ')
		{
			endNumber = 0;
			for (int j = i - 1; j >= 0; j--)
			{
				endNumber += digits[j] * pow(10, k);
				k++;
			}
			if (sign > 0) 
			{
			endNumber = 0 - endNumber;
			}
			max = max > function(endNumber) ? max : function(endNumber);
			i = 0;
			k = 0;
			sign = 0;
			for (int j = 0; j < 10; j++)
			{
				digits[j] = 0;
			}
		}
		else if (number == '-')
		{
		sign = 1;	
		}
		else 
		{
			digits[i] = number - 48;
			i++;
		}
		
		
	}
	
		
	printf("%d\n", max);
	return 0;
}
