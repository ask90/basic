#include <stdio.h>
#include <stdlib.h> // для abs

int count_bigger_abs(int n, int a[]) {
    if (n <= 0) return 0;

    int max_val = a[0];

    // ищем максимальный элемент по значению
    for (int i = 1; i < n; i++) {
        if (a[i] > max_val) max_val = a[i];
    }

    int count = 0;

    // считаем элементы, которые по модулю больше max_val
    for (int i = 0; i < n; i++) {
        if (abs(a[i]) > max_val) count++;
    }

    return count;
}

int main() {
    int arr[] = {3, -10, 7, -15, 12};
    int n = 5;

    int result = count_bigger_abs(n, arr);

    printf("%d\n", result);
    // max_val = 12, по модулю больше него: -15 → 1 элемент

    return 0;
}
