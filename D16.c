#include <stdio.h>

// Рекурсивная функция проверки степени двойки
int is2pow(int n) {
    if (n == 1) return 1;        // 2^0 = 1
    if (n % 2 != 0 || n == 0) return 0; 
    return is2pow(n / 2);
}

int main(void) {
    int n;
    scanf("%d", &n);

    if (is2pow(n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
