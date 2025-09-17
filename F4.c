#include <stdio.h>

void print_digit(char s[]) {
    int freq[10] = {0};

    // Подсчёт цифр
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            freq[s[i] - '0']++;
        }
    }

    // Вывод в порядке возрастания
    for (int d = 0; d <= 9; d++) {
        if (freq[d] > 0) {
            printf("%d %d\n", d, freq[d]);
        }
    }
}

int main() {
    char s[] = "Hello123 world77";
    print_digit(s);
    return 0;
}
