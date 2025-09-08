#include <stdio.h>

// Рекурсивно печатает двоичное представление n
void print_binary(unsigned long long n) {
    if (n >= 2) {
        print_binary(n / 2);
    }
    putchar('0' + (int)(n % 2));
}

int main(void) {
    unsigned long long n;
    if (scanf("%llu", &n) != 1) return 0;

    if (n == 0) {
        // по условию число неотрицательное, для 0 выводим "0"
        puts("0");
    } else {
        print_binary(n);
        putchar('\n');
    }
    return 0;
}
