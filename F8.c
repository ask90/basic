#include <stdio.h>

int main() {
    int M, N;
    int x;
    int sum_input = 0;

    // читаем первый элемент - M
    scanf("%d", &M);
    x = M;
    N = M; // временно
    sum_input += x;

    // читаем остальные числа до 0 и находим N
    while (1) {
        scanf("%d", &x);
        if (x == 0) break;
        sum_input += x;
        if (x > N) N = x;
        if (x < M) M = x;
    }

    // считаем сумму арифметической прогрессии
    int total = (M + N) * (N - M + 1) / 2;

    printf("%d\n", total - sum_input);

    return 0;
}
