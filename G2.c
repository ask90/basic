#include <stdio.h>

int main() {
    FILE *input_file, *output_file;
    int N;
    
    // Открываем файл для чтения
    input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        printf("input.txt not open\n");
        return 1;
    }
    
    // Считываем число N
    if (fscanf(input_file, "%d", &N) != 1) {
        printf("Read error N\n");
        fclose(input_file);
        return 1;
    }
    
    // Закрываем входной файл
    fclose(input_file);
    
    // Проверяем корректность N
    if (N % 2 != 0 || N > 26 || N < 2) {
		return 1;
    }
    
    // Открываем файл для записи
    output_file = fopen("output.txt", "w");
    if (output_file == NULL) {
        printf("output.txt not open\n");
        return 1;
    }
    
    // Формируем строку
    char result[N + 1]; // +1 для нулевого терминатора
    int even_digit = 2; // начинаем с цифры 2
    char letter = 'A'; // начинаем с буквы A
    
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            // Нечетная позиция (индексация с 0) - буква
            result[i] = letter;
            letter++; // следующая буква алфавита
        } else {
            // Четная позиция - цифра
            result[i] = even_digit + '0'; // преобразуем цифру в символ
            even_digit += 2; // следующая четная цифра
            
            // Если цифра стала больше 8, возвращаемся к 2
            if (even_digit > 8) {
                even_digit = 2;
            }
        }
    }
    result[N] = '\0'; // добавляем нулевой терминатор
    
    // Записываем результат в файл
    fprintf(output_file, "%s", result);
    
    // Закрываем выходной файл
    fclose(output_file);
    
    return 0;
}
