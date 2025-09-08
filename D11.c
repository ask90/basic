#include <stdio.h>

// Рекурсивная функция подсчёта единиц в двоичной записи
int count_ones(unsigned int n) {
    if (n == 0) return 0;
    return (n % 2) + count_ones(n / 2);
}

int main(void) {
    unsigned int n;
    scanf("%u", &n);

    printf("%d\n", count_ones(n));
    return 0;
}
