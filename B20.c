#include <stdio.h>

int main(void)
{
	int number, simple = 0;
	scanf("%d", &number);
	for (int i = 1; i <= number; i++)
	{
		number % i ? simple = simple : simple++;
	}
	printf(simple == 2 ? "YES\n" : "NO\n");
	return 0;
}
