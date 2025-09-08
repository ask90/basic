#include <stdio.h>

// Рекурсивная функция печати чисел от n до 1
void print_numbers(int n) {
    if (n == 0) return;   // базовый случай
    printf("%d ", n);
    print_numbers(n - 1);
}

int main(void) {
    int n;
    scanf("%d", &n);

    if (n <= 0) {
        printf("No correct!.\n");
        return 1;
    }

    print_numbers(n);
    putchar('\n');
    return 0;
}
