#include <stdio.h>


int main(void) {
    int m[3][3] = 
    {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int *p1;
	int(*p2) [3];
	p1 = m[1];
	p2 = m + 1;
	printf ("%d\n", p2);
	p1++;
	p2++;
	printf ("%d %d\n", *p1, **p2);


    return 0;
}

