#include <stdio.h>

void sort_even_odd(int n, int a[]) {
    int temp[n];   // вспомогательный массив
    int idx = 0;

    // сначала копируем чётные
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            temp[idx++] = a[i];
        }
    }

    // затем копируем нечётные
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            temp[idx++] = a[i];
        }
    }

    // переписываем обратно в исходный массив
    for (int i = 0; i < n; i++) {
        a[i] = temp[i];
    }
}

 void print_array(int size, int a[]) {
	 for (int i = 0; i < size; i++)
	 {
		 printf("%d", a[i]);
	 }
}

int main() {
	int a[10] = {5, 4, 3, 2, 1};
    sort_even_odd(5, a);
    print_array(5, a);
}
