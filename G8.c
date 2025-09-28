#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_NUMBERS 1000

int main() {
    FILE *input_file, *output_file;
    char str[1001]; // 1000 символов + 1 для нулевого терминатора
    int numbers[MAX_NUMBERS];
    int num_count = 0;
    
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
    
    // Извлекаем числа из строки
    int i = 0;
    while (i < length) {
        // Пропускаем не-цифры
        if (!isdigit(str[i])) {
            i++;
            continue;
        }
        
        // Нашли цифру - извлекаем число
        int number = 0;
        while (i < length && isdigit(str[i])) {
            number = number * 10 + (str[i] - '0');
            i++;
        }
        
        // Сохраняем число в массив
        if (num_count < MAX_NUMBERS) {
            numbers[num_count++] = number;
        }
    }
    
    // Сортируем массив чисел по возрастанию (пузырьковая сортировка)
    for (int i = 0; i < num_count - 1; i++) {
        for (int j = 0; j < num_count - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    
    // Открываем файл для записи
    output_file = fopen("output.txt", "w");
    if (output_file == NULL) {
        printf("output.txt not open\n");
        return 1;
    }
    
    // Записываем отсортированные числа в файл
    for (int i = 0; i < num_count; i++) {
        if (i == 0) {
            fprintf(output_file, "%d", numbers[i]);
        } else {
            fprintf(output_file, " %d", numbers[i]);
        }
    }
    
    // Если чисел не найдено, файл будет пустым
    fclose(output_file);
   
    return 0;
}
