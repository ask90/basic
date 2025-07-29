#include <stdio.h>

int main()
{
	int month = 0;
	scanf("%d", &month);
	if (month >=3 && month < 6)
		printf("spring\n");
	else if (month >=6 && month < 9)
		printf("summer\n");
	else if (month >=9 && month < 12)
		printf("autumn\n");
	else
		printf("winter\n");
	return 0;
}

