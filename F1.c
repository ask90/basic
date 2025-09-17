#include <stdio.h>

void sort_array(int size, int a[]) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
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
    sort_array(5, a);
    print_array(5, a);
}
