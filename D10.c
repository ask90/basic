#include <stdio.h>

// Рекурсивная проверка простоты числа
int is_prime(int n, int d) {
    if (n < 2) return 0;          // числа < 2 не простые
    if (d * d > n) return 1;      // делителей не нашли → простое
    if (n % d == 0) return 0;     // нашли делитель → составное
    return is_prime(n, d + 1);    // проверяем следующий делитель
}

int main(void) {
    int n;
    scanf("%d", &n);

    if (is_prime(n, 2)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
