#include <stdio.h>

// Функция проверяет: сумма цифр числа четная?

int is_sum_even(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum % 2 == 0;
}

int main(void) {
    int n;
    scanf("%d", &n);

    if (n < 0) {
        printf("Not correct, insert >= 0.\n");
        return 1;
    }

    if (is_sum_even(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
