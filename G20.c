#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// Логическая функция для проверки возможности составления палиндрома
bool can_form_palindrome(const char *str) {
    int count[26] = {0}; // Счетчик для букв a-z
    int length = strlen(str);
    
    // Подсчитываем только английские буквы (игнорируем пробелы)
    for (int i = 0; i < length; i++) {
        if (isalpha(str[i])) {
            count[str[i] - 'a']++;
        }
    }
    
    // Проверяем условие для палиндрома:
    // Может быть не более одной буквы с нечетной частотой
    int odd_count = 0;
    for (int i = 0; i < 26; i++) {
        if (count[i] % 2 == 1) {
            odd_count++;
        }
    }
    
    // Для палиндрома допустимо не более одной буквы с нечетной частотой
    return odd_count <= 1;
}

// Дополнительная функция: проверка является ли строка палиндромом
bool is_palindrome(const char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    FILE *input_file;
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
    
    // Проверяем, можно ли составить палиндром из букв предложения
    if (can_form_palindrome(str)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
