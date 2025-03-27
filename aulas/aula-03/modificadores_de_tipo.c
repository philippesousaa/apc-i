#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
    // unsigned int -> 0 a 4 bilhões
    // short int -> -32 mil a 32 mil
    // unsigned short int -> 0 a 65 mil
    // long int -> -nonilhões a nonilhões
    // unsigned long int -> 0 ~ 18 quintilhões

    printf("O tipo 'short int' ocupa %zu bytes\n", sizeof(short int));
    printf("O tipo 'long int' ocupa %zu bytesclea", sizeof(long int));
    printf("O tipo 'long double' ocupa %zu bytes\n", sizeof(long double));

    printf("O tipo 'unsigned char' vai de 0 a %u\n", UCHAR_MAX);
    printf("O tipo 'unsigned int' vai de 0 a %u\n", UINT_MAX);
    printf("O tipo 'short int' vai de %d a %d\n", SHRT_MIN, SHRT_MAX);
    printf("O tipo 'unsigned short int' vai de 0 a %u\n", USHRT_MAX);
    printf("O tipo 'long int' vai de %ld a %ld\n", LONG_MIN, LONG_MAX);
    printf("O tipo 'unsigned long int' vai de 0 a %lu\n", ULONG_MAX);
    printf("O tipo 'long double' vai de %Le a %Le\n", LDBL_MIN, LDBL_MAX);

    return 0;
}
