#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%.2f\n", (float)(a + b + c) / 3);
	return 0;
}

