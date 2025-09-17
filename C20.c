#include <stdio.h>

int main() {
    char c;
    int balance = 0;   // счётчик открытых скобок
    int ok = 1;        // флаг корректности

    while ((c = getchar()) != '.') {  // читаем до точки
        if (c == '(') {
            balance++;
        } else if (c == ')') {
            balance--;
            if (balance < 0) {
                ok = 0;  // лишняя закрывающая скобка
                break;
            }
        }
    }

    if (ok && balance == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
