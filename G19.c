#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGTH 1001

// Функция для составления палиндрома максимальной длины
void build_lexicographical_palindrome(const char *input, char *output) {
    int count[26] = {0}; // Счетчик для каждой буквы a-z
    int length = strlen(input);
    
    // Подсчитываем частоту каждой буквы
    for (int i = 0; i < length; i++) {
        count[input[i] - 'a']++;
    }
    
    char left_part[MAX_LENGTH] = {0};
    char middle_char = '\0';
    int left_index = 0;
    
    // Проходим по буквам в алфавитном порядке
    for (char c = 'a'; c <= 'z'; c++) {
        int freq = count[c - 'a'];
        
        if (freq > 0) {
            // Добавляем пары букв в левую часть
            int pairs = freq / 2;
            for (int i = 0; i < pairs; i++) {
                left_part[left_index++] = c;
            }
            
            // Если есть нечетная буква и еще не выбрана средняя
            if (freq % 2 == 1 && middle_char == '\0') {
                middle_char = c;
            }
        }
    }
    
    left_part[left_index] = '\0';
    
    // Строим правую часть (зеркальное отражение левой)
    int result_index = 0;
    
    // Левая часть
    for (int i = 0; i < left_index; i++) {
        output[result_index++] = left_part[i];
    }
    
    // Средний символ (если есть)
    if (middle_char != '\0') {
        output[result_index++] = middle_char;
    }
    
    // Правая часть (зеркальная левой)
    for (int i = left_index - 1; i >= 0; i--) {
        output[result_index++] = left_part[i];
    }
    
    output[result_index] = '\0';
}

int main() {
    FILE *input_file, *output_file;
    char input[MAX_LENGTH];
    char output[MAX_LENGTH * 2]; // На всякий случай
    
    // Открываем файл для чтения
    input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        printf("input.txtnot open\n");
        return 1;
    }
    
    // Считываем строку из файла
    if (fgets(input, sizeof(input), input_file) == NULL) {
        printf("Ошибка чтения из файла\n");
        fclose(input_file);
        return 1;
    }
    
    // Закрываем входной файл
    fclose(input_file);
    
    // Удаляем символ переноса строки в конце, если он есть
    int length = strlen(input);
    if (length > 0 && input[length - 1] == '\n') {
        input[length - 1] = '\0';
    }
    
    // Вызываем функцию для построения палиндрома
    build_lexicographical_palindrome(input, output);
    
    // Открываем файл для записи
    output_file = fopen("output.txt", "w");
    if (output_file == NULL) {
        printf("output.txt not open\n");
        return 1;
    }
    
    // Записываем результат в файл
    fprintf(output_file, "%s", output);
    
    // Закрываем выходной файл
    fclose(output_file);
    
    printf("the program successfully completed\n");
    
    return 0;
}
