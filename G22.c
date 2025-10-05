#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Функция для получения цифры Soundex для буквы
int get_soundex_digit(char c) {
    switch(c) {
        case 'b': case 'f': case 'p': case 'v':
            return 1;
        case 'c': case 'g': case 'j': case 'k': 
        case 'q': case 's': case 'x': case 'z':
            return 2;
        case 'd': case 't':
            return 3;
        case 'l':
            return 4;
        case 'm': case 'n':
            return 5;
        case 'r':
            return 6;
        default:
            return 0; // a, e, i, o, u, y, h, w
    }
}

int main() {
    FILE *input_file, *output_file;
    char word[21]; // максимальная длина 20 + 1 для '\0'
    char code[5] = "0000"; // инициализируем код нулями
    
    // Открываем файл для чтения
    input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        printf("input.txt not open\n");
        return 1;
    }
    
    // Считываем слово из файла
    if (fscanf(input_file, "%20s", word) != 1) {
        printf("read error\n");
        fclose(input_file);
        return 1;
    }
    
    // Закрываем входной файл
    fclose(input_file);
    
    int length = strlen(word);
    if (length == 0) {
        printf("word empty\n");
        return 1;
    }
    
    // Первый символ кода - первая буква слова (в нижнем регистре)
    code[0] = tolower(word[0]);
    code[1] = '0' + get_soundex_digit(word[1]);
    int code_index = 1; // текущая позиция в коде
    
    int prev_digit = get_soundex_digit(word[0]);
    
    // Обрабатываем остальные буквы слова
    for (int i = 1; i < length && code_index < 4; i++) {
        int current_digit = get_soundex_digit(word[i]);
        
        // Пропускаем нулевые цифры и повторяющиеся цифры
        if (current_digit != 0 && current_digit != prev_digit) {
            code[code_index++] = '0' + current_digit; // преобразуем цифру в символ
        }
        
        if (current_digit != 0) {
            prev_digit = current_digit;
        }
    }
    
    // Открываем файл для записи
    output_file = fopen("output.txt", "w");
    if (output_file == NULL) {
        printf("output.txt not open\n");
        return 1;
    }
    
    // Записываем код в файл
    fprintf(output_file, "%s", code);
    
    // Закрываем выходной файл
    fclose(output_file);
    
    printf("the program successfully completed\n");
    
    return 0;
}
