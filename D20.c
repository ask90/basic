#include <stdio.h>

// Рекурсивная функция возведения в степень
int recurs_power(int n, int p) {
    if (p == 0) return 1;          // любое число в степени 0 = 1
    return n * recurs_power(n, p - 1);
}

int main(void) {
    int n, p;
    scanf("%d %d", &n, &p);

    printf("%d\n", recurs_power(n, p));
    return 0;
}

