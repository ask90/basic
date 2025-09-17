#include <stdio.h>

// функция вычисления синуса через ряд Тейлора
float sinus(float x) {
    float term = x;       // первый член ряда
    float sum = 0.0;      // результат
    int n = 1;            // показатель степени

    while (term > 0.001f || term < -0.001f) {
        sum += term;
        n += 2;
        term *= -x * x / (n * (n - 1)); // следующий член ряда
    }

    return sum;
}

int main() {
    float x;
    scanf("%f", &x);

    // переводим градусы в радианы
    float radians = x * 3.14159265f / 180.0f;

    printf("%.3f\n", sinus(radians));

    return 0;
}
