#include <stdio.h>

// Рекурсивная функция поиска максимума
int max_find(int max) {
    int x;
    scanf("%d", &x);

    if (x == 0) {
        return max;  // конец последовательности
    }

    if (x > max) {
        max = x;     // обновляем максимум
    }

    return max_find(max); // продолжаем
}

int main(void) {
    int first;
    scanf("%d", &first);   // читаем первое число (оно точно не 0)

    printf("%d\n", max_find(first));

    return 0;
}
