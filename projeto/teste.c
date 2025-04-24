#include <stdio.h>

int main() {
    printf("\033[0m"); // reset
    printf("\n\n");
    
    for (int i = 0; i < 10; i++) {
        printf("        ");
        for (int j = 0; j < 60; j++) {
            printf("\033[48;5;22m "); // verde escuro para a mesa
        }
        printf("\033[0m\n");
    }
    
    
    return 0;
}
