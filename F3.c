#include <stdio.h>
#include <string.h>

// Функция печати цифр
void print_digits(int digits[])	{
for (int d = 0; d <= 9; d++) {
        if (digits[d] > 0) {
            printf("%d %d\n", d, digits[d]);
        }
    }
}
// Функция считает и выводит количество каждой цифры
void count_digits(const char num[]) {
    int freq[10] = {0}; // массив для подсчёта цифр

    // проходим по строке и считаем частоту
    for (int i = 0; num[i] != '\0'; i++) {
        if (num[i] >= '0' && num[i] <= '9') {
            freq[num[i] - '0']++;
        }
    }

    // выводим цифры в порядке возрастания с количеством
    print_digits(freq);
    
}

int main() {
    char N[1001]; // число до 1000 цифр
    scanf("%1000s", N);

    count_digits(N);

    return 0;
}
