#include <stdio.h>

int main() {
    // Declaração das variáveis
    char isbn[14] = "0000000000000";  // 13 dígitos + terminador '\0'
    int num_paginas = 0;
    float preco = 0.00;
    int ano_publicacao = 0;

    // Impressão das variáveis
    printf("ISBN: %s\n", isbn);
    printf("Num. Paginas: %03d\n", num_paginas);
    printf("Preco: R$ %07.2f\n", preco);
    printf("Publicado em: %04d\n", ano_publicacao);

    return 0;
}
