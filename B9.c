#include <stdio.h>

int main(void)
{
	int number, lastDigit = 0;
	int d0 = 0, d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0, d6 = 0, d7 = 0, d8 = 0, d9 = 0;
	scanf("%d", &number);
	while (number)
	{
		lastDigit = number % 10;
		number /= 10;
		switch (lastDigit)
		{
			case 1: d1++; break;
			case 2: d2++; break;
			case 3: d3++; break;
			case 4: d4++; break;
			case 5: d5++; break;
			case 6: d6++; break;
			case 7: d7++; break;
			case 8: d8++; break;
			case 9: d9++; break;
			default: d0++; break;
		}
			
	}
	printf(d1 + d3 + d5 + d7 + d9 ? "NO\n" : "YES\n");
    return 0;
}


