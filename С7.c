#include <stdio.h>

// Функция перевода положительного числа N в систему с основанием P (2..9).
// Возвращает результат как обычное целое число (например, 25 -> 11001 в двоичной).

int to_base(int N, int P) {
    int result = 0;
    int multiplier = 1;

    while (N > 0) {
        int digit = N % P;       // остаток — очередная цифра
        result += digit * multiplier;
        multiplier *= 10;        // сдвигаем "разряд" в десятичной записи
        N /= P;
    }

    return result;
}

int main(void) {
    int N, P;
    scanf("%d %d", &N, &P);
    if (N < 0 || P < 2 || P > 9) {
        printf("No correct.\n");
        return 1;
    }

    int converted = to_base(N, P);
    printf("%d\n", converted);
    return 0;
}

