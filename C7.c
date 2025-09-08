#include <stdio.h>

// с6 для старта
int  absolut(int num)
{
	return -num;
}

int main ()
{
	unsigned int num;
	scanf("%d", &num);
	printf("%d\n", absolut(num));
	return 0;
}
