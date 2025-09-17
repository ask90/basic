#include <stdio.h>

// функция возвращает 1 (true), если число простое
int is_prime(int n) {
    if (n < 2) return 0;         // 0 и 1 не простые
    if (n == 2) return 1;        // 2 простое
    if (n % 2 == 0) return 0;    // четные больше 2 — не простые

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);

    if (is_prime(n))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
