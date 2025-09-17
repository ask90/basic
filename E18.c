#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int d = 2; d <= 9; d++) {
        int count = 0;
        for (int i = 2; i <= N; i++) {
            if (i % d == 0) {
                count++;
            }
        }
        printf("%d %d\n", d, count);
    }

    return 0;
}
