#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Функция для удаления лишних пробелов
void remove_extra_spaces(char *str) {
    int i = 0, j = 0;
    int length = strlen(str);
    int space_flag = 0; // Флаг для отслеживания пробелов
    
    // Пропускаем пробелы в начале строки
    while (i < length && isspace(str[i])) {
        i++;
    }
    
    // Обрабатываем остальную часть строки
    while (i < length) {
        if (isspace(str[i])) {
            if (!space_flag) {
                str[j++] = ' '; // Сохраняем один пробел
                space_flag = 1;
            }
            i++;
        } else {
            str[j++] = str[i++];
            space_flag = 0;
        }
    }
    
    // Удаляем пробел в конце строки, если он есть
    if (j > 0 && isspace(str[j - 1])) {
        j--;
    }
    
    str[j] = '\0'; // Завершаем строку
}

int main() {
    FILE *input_file, *output_file;
    char str[1001];
    
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
    }
    
    // Вызываем функцию для удаления лишних пробелов
    remove_extra_spaces(str);
    
    // Открываем файл для записи
    output_file = fopen("output.txt", "w");
    if (output_file == NULL) {
        printf("output.txt not open\n");
        return 1;
    }
    
    // Записываем результат в файл
    fprintf(output_file, "%s", str);
    
    // Закрываем выходной файл
    fclose(output_file);
    
    printf("the program successfully completed\n");
    
    return 0;
}
