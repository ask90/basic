#include <stdio.h>

int main(void)
{
	int i = 0, number, buf;
	int sum = 0;
	int digit[10];
	scanf("%d", &number);
	buf = number;
	while (buf)
	{
		digit[i] = buf % 10;
		i++;
		buf /= 10;
	}
	for (i -= 1; i >= 0; i--)
	{
		sum +=  digit[i];
	}
	printf(sum == 10 ? "YES\n" : "NO\n");
	return 0;
}
