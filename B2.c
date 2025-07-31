#include <stdio.h>

int main(void)
{
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	for (int i = num1; i <= num2; i++)
    {
        printf("%d ", i * i);
    }
    return 0;
}
