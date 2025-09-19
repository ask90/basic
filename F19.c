#include <stdio.h>

// функция для вычисления среднего арифметического главной диагонали
double mean_diagonal(int n, int a[n][n]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i][i];
    }
    return (double)sum / n;
}

int main() {
    int a[5][5];
    
    // ввод матрицы 5x5
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            scanf("%d", &a[i][j]);
    
    double mean = mean_diagonal(5, a);
    int count = 0;
    
    // считаем положительные элементы, превышающие среднее диагонали
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (a[i][j] > 0 && a[i][j] > mean) {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
