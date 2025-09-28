#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    FILE *input_file, *output_file;
    char str[10001]; // 10000 символов + 1 для нулевого терминатора
    int lowercase_count = 0, uppercase_count = 0;
    
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
    
    // Подсчитываем строчные и прописные буквы
    for (int i = 0; i < length; i++) {
        if (islower(str[i])) {
            lowercase_count++;
        } else if (isupper(str[i])) {
            uppercase_count++;
        }
        // Цифры, пробелы и знаки препинания игнорируются
    }
    
    // Открываем файл для записи
    output_file = fopen("output.txt", "w");
    if (output_file == NULL) {
        printf("output.txt not open\n");
        return 1;
    }
    
    // Записываем результат в файл
    fprintf(output_file, "%d %d", lowercase_count, uppercase_count);
    
    // Закрываем выходной файл
    fclose(output_file);
    
    return 0;
}
