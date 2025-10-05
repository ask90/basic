#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    FILE *input_file, *output_file;
    char path[1001]; // для хранения полного пути
    char result[1001]; // для результата
    
    // Открываем файл для чтения
    input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        printf("input.txt not open\n");
        return 1;
    }
    
    // Считываем строку из файла
    if (fgets(path, sizeof(path), input_file) == NULL) {
        printf("not open\n");
        fclose(input_file);
        return 1;
    }
    
    // Закрываем входной файл
    fclose(input_file);
    
    // Удаляем символ переноса строки в конце, если он есть
    int length = strlen(path);
    if (length > 0 && path[length - 1] == '\n') {
        path[length - 1] = '\0';
        length--;
    }
    
    // Находим последнюю точку в пути (расширение файла)
    char *last_dot = strrchr(path, '.');
    // Находим последний слэш (чтобы не спутать с точками в пути директории)
    char *last_slash = strrchr(path, '/');
    
    // Если есть точка после последнего слэша (или слэша нет) - это расширение файла
    if (last_dot != NULL && (last_slash == NULL || last_dot > last_slash)) {
        // Копируем часть строки до точки
        int pos = last_dot - path;
        strncpy(result, path, pos);
        result[pos] = '\0';
        // Добавляем новое расширение
        strcat(result, ".html");
    } else {
        // Точки нет или она в пути директории - просто добавляем расширение
        strcpy(result, path);
        strcat(result, ".html");
    }
    
    // Открываем файл для записи
    output_file = fopen("output.txt", "w");
    if (output_file == NULL) {
        printf("output.txt not open\n");
        return 1;
    }
    
    // Записываем результат в файл
    fprintf(output_file, "%s", result);
    
    // Закрываем выходной файл
    fclose(output_file);
    
    printf("the program completed successfully\n");
        
    return 0;
}
