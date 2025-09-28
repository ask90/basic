#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    FILE *input_file, *output_file;
    char str[1001], result[1001];
    int used[256] = {0}; // таблица использованных символов (ASCII)
    int result_index = 0;
    
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
    
    // Обрабатываем строку: удаляем пробелы и повторяющиеся символы
    for (int i = 0; i < length; i++) {
        // Пропускаем пробелы
        if (str[i] == ' ') {
            continue;
        }
        
        // Если символ еще не встречался, добавляем его в результат
        if (!used[(unsigned char)str[i]]) {
            result[result_index++] = str[i];
            used[(unsigned char)str[i]] = 1; // помечаем символ как использованный
        }
    }
    result[result_index] = '\0'; // завершаем строку
    
    // Открываем файл для записи
    output_file = fopen("output.txt", "w");
    if (output_file == NULL) {
        printf("output.txt not open\n");
        return 1;
    }
    
    // Записываем результат в файл
    fprintf(output_file, "%s", result);
    
    // Закрываем выходной файл
    fclose(output_file);
    
    return 0;
}
