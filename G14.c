#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    FILE *input_file, *output_file;
    char line[101];
    char surname[101], name[101], patronymic[101];
    
    // Открываем файл для чтения
    input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        printf("input.txt not open\n");
        return 1;
    }
    
    // Считываем строку из файла
    if (fgets(line, sizeof(line), input_file) == NULL) {
        printf("read error\n");
        fclose(input_file);
        return 1;
    }
    
    // Закрываем входной файл
    fclose(input_file);
    
    // Удаляем символ переноса строки в конце, если он есть
    int length = strlen(line);
    if (length > 0 && line[length - 1] == '\n') {
        line[length - 1] = '\0';
        length--;
    }
    
    // Разбиваем строку на фамилию, имя и отчество
    int count = sscanf(line, "%100s %100s %100s", surname, name, patronymic);
    
    // Открываем файл для записи
    output_file = fopen("output.txt", "w");
    if (output_file == NULL) {
        printf("output.txt not open\n");
        return 1;
    }
    
    // Формируем приветствие с именем и фамилией
    if (count > 2) {
        // Есть фамилия и имя
        fprintf(output_file, "Hello, %s %s!", name, surname);
    }
        
    // Закрываем выходной файл
    fclose(output_file);
    
    printf("the program completed successfully\n");
    
    return 0;
}
