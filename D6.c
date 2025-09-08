#include <stdio.h>

// Рекурсивная функция: считывает строку и печатает её задом наперёд
void reverse_string(void) {
    char c = getchar();
    if (c == '.') {
        return;
    }
    reverse_string();
    putchar(c);
}

int main(void) {
    reverse_string();
    putchar('\n');
    return 0;
}
