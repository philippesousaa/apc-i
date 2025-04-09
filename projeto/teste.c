#include <stdio.h>

int main() {
    // ANSI 256 cores: 48;5;28 é o fundo verde tipo sinuca
    printf("\033[48;5;28m"); // fundo
    printf("\033[38;5;15m"); // texto branco
    printf("Fundo verde tipo mesa de bilhar!\n");

    // Reset
    printf("\033[0m");
    return 0;
}
