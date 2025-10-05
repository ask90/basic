#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    FILE *input_file, *output_file;
    char str[1001];
    int count = 0;
    
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
    
    // Обрабатываем строку для подсчета слов, оканчивающихся на 'a'
    int i = 0;
    while (i < length) {
        // Пропускаем пробелы
        if (isspace(str[i])) {
            i++;
            continue;
        }
        
        // Находим начало и конец слова
        int word_start = i;
        while (i < length && !isspace(str[i])) {
            i++;
        }
        int word_end = i - 1;
        
        // Проверяем, оканчивается ли слово на 'a'
        if (word_end >= word_start && str[word_end] == 'a') {
            count++;
        }
    }
    
    // Открываем файл для записи
    output_file = fopen("output.txt", "w");
    if (output_file == NULL) {
        printf("output.txt not open\n");
        return 1;
    }
    
    // Записываем результат в файл
    fprintf(output_file, "%d", count);
    
    // Закрываем выходной файл
    fclose(output_file);
    
    
    return 0;
}
