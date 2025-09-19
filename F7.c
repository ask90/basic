#include <stdio.h>

int compression(int a[], int b[], int N) {
    if (N == 0) return 0; // пустой массив

    int count = 1;       // счётчик элементов серии
    int j = 0;           // индекс для массива b[]

    // если первый элемент 1, то первая серия считается нулевой
    if (a[0] == 1) {
        b[j++] = 0;
    }

    for (int i = 1; i < N; i++) {
        if (a[i] == a[i-1]) {
            count++;
        } else {
            b[j++] = count;
            count = 1; // начинаем новую серию
        }
    }

    // записываем последнюю серию
    b[j++] = count;

    return j; // число элементов в массиве b[]
}


int main() {
    int a1[] = {0,0,0,0,1,1,1,1,1,1,1,0,0,1,1,1,1};
    int b1[20];
    int n1 = compression(a1, b1, 17);
    for (int i = 0; i < n1; i++) printf("%d ", b1[i]);
    printf("\n"); // Вывод: 4 7 2 4

    int a2[] = {1,1,1,0,0,0,0,0,0,0};
    int b2[20];
    int n2 = compression(a2, b2, 10);
    for (int i = 0; i < n2; i++) printf("%d ", b2[i]);
    printf("\n"); // Вывод: 0 3 7

    return 0;
}

