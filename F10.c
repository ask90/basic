#include <stdio.h>

void compress_string(const char input[], char output[]) {
    int count = 1, j = 0;
    for (int i = 0; input[i] != '.'; i++) {
        if (input[i] == input[i + 1]) {
            count++;
        } else {
            output[j++] = input[i];
            if (count >= 1) {
                j += sprintf(&output[j], "%d", count);
            }
            count = 1;
        }
    }
    output[j] = '\0';
}

int main() {
    char input[1001];   // для ввода до 1000 символов + точка
    char result[2000];  // результат

    int i = 0;
    char c;
    while (1) {
        c = getchar();
        input[i++] = c;
        if (c == '.' || i >= 1000) break;  // конец ввода
    }
    input[i] = '\0';

    compress_string(input, result);

    printf("%s\n", result);

    return 0;
}
