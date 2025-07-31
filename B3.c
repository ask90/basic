#include <stdio.h>

int main(void)
{
	int num1, num2, sum = 0;
	scanf("%d %d", &num1, &num2);
	for (int i = num1; i <= num2; i++)
    {
		sum += i * i;
    }
    printf("%d\n", sum);
    return 0;
}

