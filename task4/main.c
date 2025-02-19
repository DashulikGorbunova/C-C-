#include <stdio.h>

extern int global_var;  // Объявляем глобальную переменную из file1.c

void print_from_file1();
void print_from_file2();

int main() {
    printf("main.c -> global_var = %d\n", global_var);
    print_from_file1();
    print_from_file2();
    return 0;
}
