#include <stdio.h>

int main() {
    long long N;
    scanf("%lld", &N);

    // Сохраняем в строку, чтобы удобно вывести цифры
    char str[25];
    sprintf(str, "%lld", N);

    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c ", str[i]);
    }

    return 0;
}
