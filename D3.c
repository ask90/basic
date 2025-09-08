#include <stdio.h>


void printDigit(void)
{
	char ch;
	scanf("%c", &ch);
	if (ch >= '0' && ch <= '9') {
		printDigit();
		printf("%c ", ch);
	}
}

int main ()
{
	printDigit();
	return 0;
}
