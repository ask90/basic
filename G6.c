#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define palindrom 1
#define noPalindrom 0

// Логическая функция проверки палиндрома
int is_palindrom(char str[]) {
    int length = strlen(str);
    
    // Проверяем симметричность строки
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            return noPalindrom; // Не палиндром
        }
    }
    return palindrom; // Палиндром
}

int main() {
    FILE *input_file, *output_file;
    char str[1001]; // 1000 символов + 1 для нулевого терминатора
    
    // Открываем файл для чтения
    input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        printf("input.txt not open\n");
        return 1;
    }
    
    // Считываем строку из файла
    if (fgets(str, sizeof(str), input_file) == NULL) {
        printf("read error\n");
        fclose(input_file);
        return 1;
    }
    
    // Закрываем входной файл
    fclose(input_file);
    
    // Удаляем символ переноса строки в конце, если он есть
    int length = strlen(str);
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }
    
    // Открываем файл для записи
    output_file = fopen("output.txt", "w");
    if (output_file == NULL) {
        printf("output.txt not open \n");
        return 1;
    }
    
    // Проверяем, является ли строка палиндромом
    if (is_palindrom(str)) {
        fprintf(output_file, "YES");
    } else {
        fprintf(output_file, "NO");
    }
    
    // Закрываем выходной файл
    fclose(output_file);
    
    
    return 0;
}
