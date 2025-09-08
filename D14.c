#include <stdio.h>

// Рекурсивная функция фильтрации
void print_odds(void) {
    int x;
    scanf("%d", &x);

    if (x == 0) return;      // конец последовательности

    if (x % 2 != 0) {
        printf("%d ", x);    // выводим только нечётные
    }

    print_odds();            // продолжаем читать числа
}

int main(void) {
    print_odds();
    putchar('\n');
    return 0;
}
