#include <stdio.h>

int main(void)
{
	int number, even = 0, odd = 0;
	scanf("%d", &number);
	while (number)
	{
		number % 2 ? odd++ : even++;		
		number /= 10;			
	}
	printf("%d %d\n", even, odd);
    return 0;
}
