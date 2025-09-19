#include <stdio.h>

int main() {
    char col_char, row_char;
    scanf("%c%c", &col_char, &row_char);

    int col = col_char - 'A' + 1; // A=1, B=2, ..., H=8
    int row = row_char - '0';     // '1'->1, '8'->8

    if ((col + row) % 2 == 0)
        printf("BLACK\n");
    else
        printf("WHITE\n");

    return 0;
}
