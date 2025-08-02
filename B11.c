#include <stdio.h>

int main(void)
{
	int i = 0, number, buf;
	int digit[10] = {0};
	scanf("%d", &number);
	buf = number;
	do
	{
		digit[i] = buf % 10;
		i++;
		buf /= 10;
	}
	while (buf);
	for (int j = 0; j < i; j++)
	{
		printf("%d", digit[j]);
	}
	return 0;
}
