#include <stdio.h>

// Функция вычисления НОД (наибольшего общего делителя)

int nod(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Not correct.\n");
        return 1;
    }

    printf("%d\n", nod(a, b));
    return 0;
}
