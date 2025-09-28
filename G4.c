#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    FILE *input_file, *output_file;
    char word1[101], word2[101];
    int count1[26] = {0}, count2[26] = {0}; // счетчики для букв a-z
    int result[26] = {0}; // результирующие буквы
    
    // Открываем файл для чтения
    input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        printf("input.txt not open\n");
        return 1;
    }
    
    // Считываем два слова
    if (fscanf(input_file, "%100s %100s", word1, word2) != 2) {
        printf("read error\n");
        fclose(input_file);
        return 1;
    }
    
    // Закрываем входной файл
    fclose(input_file);
    
    // Подсчитываем частоту каждой буквы в первом слове
    int len1 = strlen(word1);
    for (int i = 0; i < len1; i++) {
        if (islower(word1[i])) {
            count1[word1[i] - 'a']++;
        }
    }
    
    // Подсчитываем частоту каждой буквы во втором слове
    int len2 = strlen(word2);
    for (int i = 0; i < len2; i++) {
        if (islower(word2[i])) {
            count2[word2[i] - 'a']++;
        }
    }
    
    // Находим буквы, которые встречаются ровно один раз в каждом слове
    for (int i = 0; i < 26; i++) {
        if (count1[i] == 1 && count2[i] == 1) {
            result[i] = 1;
        }
    }
    
    // Открываем файл для записи
    output_file = fopen("output.txt", "w");
    if (output_file == NULL) {
        printf("output.txt not open\n");
        return 1;
    }
    
    // Выводим результат в лексикографическом порядке
    int first = 1;
    for (int i = 0; i < 26; i++) {
        if (result[i]) {
            if (first) {
                fprintf(output_file, "%c", 'a' + i);
                first = 0;
            } else {
                fprintf(output_file, " %c", 'a' + i);
            }
        }
    }
    
    // Если не найдено ни одной буквы, файл будет пустым
    fclose(output_file);
    
    return 0;
}
