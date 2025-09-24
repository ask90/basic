#include <stdio.h>
#include <string.h>

int main() {
    FILE *input_file, *output_file;
    char str[1001]; // 1000 символов + 1 для нулевого терминатора
    int length;
    
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
    length = strlen(str);
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }
    
        
    // Открываем файл для записи
    output_file = fopen("output.txt", "w");
    if (output_file == NULL) {
        printf("output.txt not open\n");
        return 1;
    }
    
    // Получаем последний символ строки
    char last_char = str[length - 1];
    
    // Флаг для определения первого выводимого числа (чтобы правильно ставить пробелы)
    int first = 1;
    
    // Проходим по всем символам строки (кроме последнего)
    for (int i = 0; i < length - 1; i++) {
        if (str[i] == last_char) {
            if (first) {
                fprintf(output_file, "%d", i); // +1 потому что нумерация с 1
                first = 0;
            } else {
                fprintf(output_file, " %d", i);
            }
        }
    }
    
    // Закрываем выходной файл
    fclose(output_file);
    
    return 0;
}
