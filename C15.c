#include <stdio.h>

// функция возвращает 1 (true), если цифры числа возрастают слева направо
int grow_up(int n) {
    int prev = 10; // больше любой цифры
    while (n > 0) {
        int d = n % 10;   // последняя цифра
        n /= 10;
        if (d >= prev)   // цифры должны строго возрастать слева направо
            return 0;
        prev = d;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);

    if (grow_up(n))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
