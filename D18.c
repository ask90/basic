// Рекурсивная функция печати цифр числа
void print_digits(int n) {
    if (n < 10) {
        printf("%d ", n);
    } else {
        print_digits(n / 10);
        printf("%d ", n % 10);
    }
}
