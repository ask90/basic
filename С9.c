#include <stdio.h>

// Функция вычисления факториала
long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main(void) {
    int n;
    scanf("%d", &n);

    if (n < 1 || n > 20) {
        printf("Not correct! Insert from 1 to 20.\n");
        return 1;
    }

    printf("%lld\n", factorial(n));
    return 0;
}

