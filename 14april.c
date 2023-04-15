#include <stdio.h>

void print_star();
void print_dollar();
void (*func_ptr)() = print_star;

int main() {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 10; j++) { 
            (*func_ptr)(); 
        }
        printf("\n");
        func_ptr = (func_ptr == print_star) ? print_dollar : print_star; 
    }
    return 0;
}

void print_star() {
    printf("* ");
}

void print_dollar() {
    printf("$ ");
}