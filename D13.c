#include <stdio.h>

// Рекурсивная функция печати простых множителей
void print_factors(int n, int d) {
    if (n == 1) return;       // базовый случай

    if (n % d == 0) {
        printf("%d ", d);
        print_factors(n / d, d);  // продолжаем делить на тот же делитель
    } else {
        print_factors(n, d + 1);  // пробуем следующий делитель
    }
}

int main(void) {
    int n;
    scanf("%d", &n);

    if (n > 1) {
        print_factors(n, 2);
    }
    putchar('\n');

    return 0;
}
