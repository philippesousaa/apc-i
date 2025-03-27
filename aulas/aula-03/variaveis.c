#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
    char tecla;
    tecla = 'A';
    printf("Tecla = %c\n", tecla);
    tecla = 100;
    printf("Tecla = %c\n", tecla);


    int numero = 10;
    printf("numero = %i\n", numero);


    {
        int numero = 20;
        printf("numero = %i\n", numero);
    }

    float media = 9.5f;
    printf("media = %.7f\n", media);

    return 0;
}