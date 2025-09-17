#include <stdio.h>

// Рекурсивная функция печати цифр числа
void print_digits(int n) {
    if (n < 10) {
        printf("%d ", n);
    } else {
        print_digits(n / 10);
        printf("%d ", n % 10);
    }
}

int main(void) {
    int n;
    scanf("%d", &n);

    if (n > 0) {
        print_digits(n);
        putchar('\n');
    }

    return 0;
}
