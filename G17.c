#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Функция для обмена пары соседних символов (игнорируя пробелы)
void swap_neighbors_ignore_spaces(char *str, char *result) {
    int len = strlen(str);
    int result_index = 0;
    
    // Создаем временный массив без пробелов
    char temp[1001];
    int temp_index = 0;
    
    // Копируем все символы кроме пробелов во временный массив
    for (int i = 0; i < len; i++) {
        if (str[i] != ' ') {
            temp[temp_index++] = str[i];
        }
    }
    temp[temp_index] = '\0';
    
    // Меняем местами пары символов во временном массиве
    for (int i = 0; i < temp_index; i += 2) {
        if (i + 1 < temp_index) {
            // Меняем местами пару символов
            char swap = temp[i];
            temp[i] = temp[i + 1];
            temp[i + 1] = swap;
        }
    }
    
    // Восстанавливаем исходную строку с пробелами
    temp_index = 0;
    for (int i = 0; i < len; i++) {
        if (str[i] == ' ') {
            // Вставляем пробел на свое место
            result[result_index++] = ' ';
        } else {
            // Вставляем символ из обработанного массива
            result[result_index++] = temp[temp_index++];
        }
    }
    result[result_index] = '\0';
}

int main() {
    FILE *input_file, *output_file;
    char str[1001];
    char result[1001];
    
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
    
    // Вызываем функцию для обработки строки
    swap_neighbors_ignore_spaces(str, result);
    
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
    
    printf("the program successfully completed\n");
      
    return 0;
}
