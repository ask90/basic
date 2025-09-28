#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    FILE *input_file, *output_file;
    char str[1001];
    char longest_word[1001] = "";
    char current_word[1001];
    int max_length = 0;
    
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
    
    // Обрабатываем строку для поиска самого длинного слова
    int i = 0;
    while (i < length) {
        // Пропускаем пробелы
        if (isspace(str[i])) {
            i++;
            continue;
        }
        
        // Извлекаем текущее слово
        int word_len = 0;
        while (i < length && !isspace(str[i])) {
            current_word[word_len++] = str[i++];
        }
        current_word[word_len] = '\0'; // завершаем слово
        
        // Проверяем, является ли это слово самым длинным
        if (word_len > max_length) {
            max_length = word_len;
            strcpy(longest_word, current_word);
        }
    }
    
    // Открываем файл для записи
    output_file = fopen("output.txt", "w");
    if (output_file == NULL) {
        printf("output.txt not open\n");
        return 1;
    }
    
    // Записываем результат в файл
    if (max_length > 0) {
        fprintf(output_file, "%s", longest_word);
    }
    
    // Закрываем выходной файл
    fclose(output_file);
    
    
    return 0;
}
