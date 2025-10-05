#include <stdio.h>
#include <string.h>

int main() {
    FILE *input_file, *output_file;
    char str[1001];
    char result[2001] = "";
    char *pos = str;
    char *found;
    
    input_file = fopen("input.txt", "r");
    output_file = fopen("output.txt", "w");
    
    if (input_file == NULL || output_file == NULL) {
        printf("files not open\n");
        return 1;
    }
    
    fgets(str, sizeof(str), input_file);
    
    // Удаляем перенос строки
    int len = strlen(str);
    if (len > 0 && str[len-1] == '\n') str[len-1] = '\0';
    
    // Заменяем все "LingCao" на "Cao"
    while ((found = strstr(pos, "Ling")) != NULL) {
        // Копируем часть до найденного "Ling"
        strncat(result, pos, found - pos);
        // Добавляем "Cao" вместо "Ling"
        strcat(result, "Cao");
        // Перемещаем указатель после "Cao"
        pos = found + 4;
    }
    
    // Копируем оставшуюся часть строки
    strcat(result, pos);
    
    fprintf(output_file, "%s", result);
    
    fclose(input_file);
    fclose(output_file);
    printf("the program successfully completed\n");
    
    return 0;
}
