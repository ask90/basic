#include <stdio.h>

// рекурсивная функция вывода чисел от A до B
void print_range(int a, int b) {
    printf("%d ", a);

    if (a < b) {
        print_range(a + 1, b);
    } else if (a > b) {
        print_range(a - 1, b);
    }
    // если a == b, рекурсия завершится без новых вызовов
}

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);

    print_range(a, b);
    putchar('\n');
    return 0;
}
