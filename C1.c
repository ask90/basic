#include <stdio.h>

int absolut(int arg)
{
return arg < 0 ? 0 - arg : arg;
}

int main ()
{
int number;	
scanf("%d", &number);
printf("%d\n", absolut(number));
}

