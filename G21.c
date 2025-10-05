#include <stdio.h>
#include <math.h>

int main() {
    FILE *input_file, *output_file;
    int count = 0;
    char c;
    
    // Открываем файл для чтения
    input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        printf("input.txt not open\n");
        return 1;
    }
    
    // Считаем количество звёздочек
    while ((c = fgetc(input_file)) != EOF) {
        if (c == '*') {
            count++;
        }
    }
    
    // Закрываем входной файл
    fclose(input_file);
    
    // Открываем файл для записи
    output_file = fopen("output.txt", "w");
    if (output_file == NULL) {
        printf("output.txt not open\n");
        return 1;
    }
    
    // Проверяем, можно ли построить равносторонний треугольник
    // Количество звёздочек должно быть треугольным числом: n(n+1)/2
    int n = 0;
    int triangle_number = 0;
    
    while (triangle_number < count) {
        n++;
        triangle_number = n * (n + 1) / 2;
    }
    
    if (triangle_number != count || count == 0) {
        // Нельзя построить треугольник
        fprintf(output_file, "NO\n");
    } else {
        // Строим треугольник
        for (int i = 1; i <= n; i++) {
            // Пробелы в начале строки
            for (int j = 0; j < n - i; j++) {
                fprintf(output_file, " ");
            }
            
            // Звёздочки с пробелами
            for (int j = 0; j < i; j++) {
                fprintf(output_file, "*");
                if (j < i - 1) {
                    fprintf(output_file, " ");
                }
            }
            
            // Переход на новую строку (кроме последней)
            if (i < n) {
                fprintf(output_file, "\n");
            }
        }
    }
    
    // Закрываем выходной файл
    fclose(output_file);
    
    printf("the program successfully completed\n");
    
    return 0;
}
