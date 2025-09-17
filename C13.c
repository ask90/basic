#include <stdio.h>

// функция вычисления косинуса через ряд Тейлора
float cosinus(float x) {
    float term = 1.0f;    // первый член ряда
    float sum = 0.0f;     // результат
    int n = 0;            // показатель степени

    while (term > 0.001f || term < -0.001f) {
        sum += term;
        n += 2;
        term *= -x * x / (n * (n - 1)); // следующий член ряда
    }

    return sum;
}

int main() {
    int deg;
    scanf("%d", &deg);

    // перевод градусов в радианы
    float radians = deg * 3.14159265f / 180.0f;

    printf("%.3f\n", cosinus(radians));

    return 0;
}
