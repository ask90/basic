#include <stdio.h>

void swap_negmax_last(int size, int a[]) {
    int max_neg_index = -1; // индекс максимального отрицательного числа

    // ищем максимальный отрицательный элемент
    for (int i = 0; i < size; i++) {
        if (a[i] < 0) {
            if (max_neg_index == -1 || a[i] > a[max_neg_index]) {
                max_neg_index = i;
            }
        }
    }

    // если такой элемент найден, меняем его с последним
    if (max_neg_index != -1 && size > 0) {
        int temp = a[max_neg_index];
        a[max_neg_index] = a[size - 1];
        a[size - 1] = temp;
    }
}


int main() {
    int arr[] = {3, -7, 2, -1, 5};
    int n = 5;

    swap_negmax_last(n, arr);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    // Вывод: 3 -7 2 5 -1 (макс отрицательный -1 поменялся с последним элементом 5)
    
    return 0;
}
