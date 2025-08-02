#include <stdio.h>

int main(void)
{
	int number, lastDigit = 0, identical =  0;
	int d0 = 0, d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0, d6 = 0, d7 = 0, d8 = 0, d9 = 0;
	scanf("%d", &number);
	while (number)
	{
		lastDigit = number % 10;
		number /= 10;
		switch (lastDigit)
		{
			case 1: d1++; if (d1 > 1) identical = 1; break;
			case 2: d2++; if (d2 > 1) identical = 1; break;
			case 3: d3++; if (d3 > 1) identical = 1; break;
			case 4: d4++; if (d4 > 1) identical = 1; break;
			case 5: d5++; if (d5 > 1) identical = 1; break;
			case 6: d6++; if (d6 > 1) identical = 1; break;
			case 7: d7++; if (d7 > 1) identical = 1; break;
			case 8: d8++; if (d8 > 1) identical = 1; break;
			case 9: d9++; if (d9 > 1) identical = 1; break;
			default: d0++; if (d0 > 1) identical = 1; break;
		}
			
	}
	printf(identical ? "YES\n" : "NO\n");
    return 0;
}


