#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Функция для сравнения цифр (для qsort)
int cmp(const void *a, const void *b) {
    char x = *(char*)a;
    char y = *(char*)b;
    return y - x; // сортировка по убыванию
}

int main() {
    char num[100];  // число читаем как строку
    scanf("%s", num);

    int len = strlen(num);

    // Сортируем символы (цифры) по убыванию
    qsort(num, len, sizeof(char), cmp);

    // Выводим результат
    printf("%s\n", num);

    return 0;
}
