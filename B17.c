#include <stdio.h>

int main(void)
{
	int i = 0, j = 0, number, buf;
	int mul = 1, sum = 0;
	scanf("%d", &number);
	int digit[10];
	for (i = 10; i <= number; i++)
	{
		buf = i;
		while (buf)
		{
			digit[j] = buf % 10;
			j++;
			buf /= 10;
		}
		for (j -= 1; j >= 0; j--)
		{
			sum +=  digit[j];
			mul *= digit[j];
			//printf("%d %d %d %d \n", i, digit[j], sum, mul);
		}
		if (sum == mul)
		{
			printf("%d ", i);
		}
		j = 0;
		mul = 1;
		sum = 0;	
	}
	return 0;
}
