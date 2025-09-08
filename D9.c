#include <stdio.h>

// Рекурсивная функция вычисления суммы цифр
int sum_digits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sum_digits(n / 10);
}

int main(void) {
    int n;
    scanf("%d", &n);

    if (n <= 0) {
        printf("No correct!\n");
        return 1;
    }

    printf("%d\n", sum_digits(n));
    return 0;
}
