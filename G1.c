#include <stdio.h>
#include <string.h>

int main() {
    FILE *input_file, *output_file;
    char str[101]; // 100 символов + 1 для нулевого терминатора
    int length;
    
    // Открываем файл для чтения
    input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        printf("input.txt not open\n");
        return 1;
    }
    
    // Считываем строку из файла
    if (fgets(str, sizeof(str), input_file) == NULL) {
        printf("Read error\n");
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
        printf("Not open output.txt\n");
        return 1;
    }
    
    // Записываем результат в файл
    fprintf(output_file, "%s, %s, %s %d", 
            str, str, str, length);
    
    // Закрываем выходной файл
    fclose(output_file);
    return 0;
}
