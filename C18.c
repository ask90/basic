#include <stdio.h>

// функция возвращает 1, если символ — цифра
int is_digit(char c) {
    return (c >= '0' && c <= '9');
}

int main() {
    char c;
    int count = 0;

    while ((c = getchar()) != '.') {  // читаем до точки
        if (is_digit(c))
            count++;
    }

    printf("%d\n", count);

    return 0;
}
