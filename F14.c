#include <stdio.h>
int sum_between_indices(int from, int to, int size, int a[]) {
    if (from < 0) from = 0;
    if (to >= size) to = size - 1;

    int sum = 0;
    for (int i = from; i <= to; i++) {
        sum += a[i];
    }
    return sum;
}

int main() {
    int arr[] = {60, 50, 89, 71, 6, 40, 61, 75, 53, 64, 79, 97};
    int n = 12;

    int from = 2, to = 4; // индексы
    int result = sum_between_indices(from, to, n, arr);

    printf("%d\n", result); // Вывод: 89 + 71 + 6 = 166

    return 0;
}
