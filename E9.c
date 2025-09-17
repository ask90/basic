#include <stdio.h>

int main() {
    int arr[10];

    // Считываем массив из 10 элементов
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Сохраняем последний элемент
    int last = arr[9];

    // Сдвигаем вправо на одну позицию
    for (int i = 9; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    // Помещаем сохранённый последний элемент в начало
    arr[0] = last;

    // Вывод массива
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
