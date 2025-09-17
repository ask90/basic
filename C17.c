#include <stdio.h>

// функция возвращает 1, если сумма цифр равна произведению
int is_happy_number(int n) {
    int sum = 0;
    int prod = 1;
    if (n == 0) {
        // для числа 0: сумма = 0, произведение = 0 → можно считать YES
        return 1;
    }
    while (n > 0) {
        int d = n % 10;
        sum += d;
        prod *= d;
        n /= 10;
    }
    return sum == prod;
}

int main() {
    int n;
    scanf("%d", &n);

    if (is_happy_number(n))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
