#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int count = 0;   // сколько чисел уже напечатано
    int k = 1;       // текущее число

    while (count < n) {
        for (int i = 0; i < k && count < n; i++) {
            printf("%d ", k);
            count++;
        }
        k++;
    }

    putchar('\n');
    return 0;
}
