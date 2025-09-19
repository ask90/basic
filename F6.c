#include <stdio.h>

int is_two_same(int size, int a[]) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (a[i] == a[j]) {
                return 1; // нашли два одинаковых
            }
        }
    }
    return 0; // одинаковых элементов нет
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {10, 20, 30, 10};

    printf("%d\n", is_two_same(5, arr1)); // 0
    printf("%d\n", is_two_same(4, arr2)); // 1

    return 0;
}
