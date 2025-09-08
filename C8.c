#include <stdio.h>

char  lowercaseToCapital(char lowercase)
{
	char capital;
	capital = lowercase - 32;
	return capital;
}

int checkToLower(char checkingSymbol)
{
	return (checkingSymbol >= 97 && checkingSymbol <=122 ) ? 1 : 0;
}

int main ()
{
	char symbol;
	while ((symbol = getchar()) != '.')
	{
		symbol = checkToLower(symbol) ? lowercaseToCapital(symbol) : symbol;
		putchar(symbol);
	}
	putchar('\n');
	return 0;
}
