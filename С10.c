#include <stdio.h>

// Функция печати всех простых множителей числа n
void print_simple(int n) {
    if (n <= 1) {
        printf("No multipliers!\n");
        return;
    }

    // делим на 2, пока делится
    while (n % 2 == 0) {
        printf("%d ", 2);
        n /= 2;
    }

    // пробуем все нечётные делители
    for (int d = 3; d * d <= n; d += 2) {
        while (n % d == 0) {
            printf("%d ", d);
            n /= d;
        }
    }

    // если осталось >1, значит это простой делитель
    if (n > 1) {
        printf("%d", n);
    }

    printf("\n");
}

int main(void) {
    int n;
    scanf("%d", &n);

    if (n <= 1) {
        printf("No correct! Insert > 1.\n");
        return 1;
    }

    print_simple(n);

    return 0;
}


