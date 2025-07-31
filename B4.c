#include <stdio.h>

int main(void)
{
	int number, i = 0;
	scanf("%d", &number);
	while (number)
	{
		number /= 10;
		i++; 
	}
	printf(i == 3 ? "YES\n" : "NO\n");
    return 0;
}


