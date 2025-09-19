#include <stdio.h>

int trace_matrix(int n, int a[n][n]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i][i]; // элементы главной диагонали
    }
    return sum;
}


int main() {
    int a[5][5];
    
    // ввод 25 элементов
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int tr = trace_matrix(5, a);

    printf("%d\n", tr);

    return 0;
}
