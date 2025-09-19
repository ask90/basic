#include <stdio.h>
#include <stdlib.h>

// функция вычисляет произведение нечётных цифр числа
int prod_odd_digits(int num) {
    int prod = 1;
    int n = abs(num);
    int has_odd = 0;

    if (n == 0) return 0;

    while (n > 0) {
        int d = n % 10;
        if (d % 2 == 1) {
            prod *= d;
            has_odd = 1;
        }
        n /= 10;
    }
    return has_odd ? prod : 0;
}

// функция вычисляет произведение чётных цифр числа
int prod_even_digits(int num) {
    int prod = 1;
    int n = abs(num);
    int has_even = 0;

    if (n == 0) return 0;

    while (n > 0) {
        int d = n % 10;
        if (d % 2 == 0) {
            prod *= d;
            has_even = 1;
        }
        n /= 10;
    }
    return has_even ? prod : 0;
}

int main() {
    int arr[10];
    int even_count = 0, odd_count = 0;

    // ввод массива
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }

    // преобразование элементов
    for (int i = 0; i < 10; i++) {
        if (even_count > odd_count) {
            if (arr[i] % 2 != 0)
                arr[i] = prod_odd_digits(arr[i]);
        } else {
            if (arr[i] % 2 == 0)
                arr[i] = prod_even_digits(arr[i]);
        }
    }

    // вывод результата
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
