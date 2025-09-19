#include <stdio.h>

int count_between(int from, int to, int size, int a[]) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] >= from && a[i] <= to) {
            count++;
        }
    }
    return count;
}


int main() {
    int arr[] = {1, 5, 8, 10, 12, 15};
    int n = 6;

    int from = 5, to = 12;
    int result = count_between(from, to, n, arr);

    printf("%d\n", result);
    // Вывод: 4 (элементы 5, 8, 10, 12)

    return 0;
}
