#include <stdio.h>

int main() { 
    char tecla;

    printf("Pressione uma tecla e depois ENTER: ");
    scanf("%c", &tecla);

    getchar();
    printf("\n a tecla foi --> %c", tecla );

    printf("Pressione outra tecla e depois ENTER: ");
    scanf("%c", &tecla);
    printf("\n a tecla foi --> %c", tecla );


    char nome[31];
    printf("Informe seu nome: ");
    scanf("%s", nome);
    printf ("Olá %s!\n", nome);

    return 0;
}