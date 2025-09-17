#include <stdio.h>

// функция преобразует символ цифры в число
int digit_to_num(char c) {
    return c - '0';
}

// проверка, является ли символ цифрой
int is_digit(char c) {
    return (c >= '0' && c <= '9');
}

int main() {
    char c;
    int sum = 0;

    while ((c = getchar()) != '.') {  // читаем до точки
        if (is_digit(c)) {
            sum += digit_to_num(c);
        }
    }

    printf("%d\n", sum);

    return 0;
}
