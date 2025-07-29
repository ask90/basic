#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0;
	scanf("%d %d %d", &a, &b, &c);
	if ( c > b && b > a)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}

