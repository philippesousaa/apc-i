#include <stdio.h>
#include <limits.h>
#include <float.h>


int main(){
    // char -> 'A', '\n', 100
    // int -> números positivos e negativos -123, 0, 222
    // float -> -100.123456, 0.0, 565.232564
    // double -> -1.12345678901234
    // void -> sem tipo

    printf("O tipo 'char' ocupa %zu byte(s)\n", sizeof(char));
    printf("O tipo 'int' ocupa %zu byte(s)\n", sizeof(int));
    printf("O tipo 'float' ocupa %zu byte(s)\n", sizeof(float));
    printf("O tipo 'double' ocupa %zu byte(s)\n", sizeof(double));

    printf("O tipo 'int' aceita valores de %d a %d\n", INT_MIN, INT_MAX);
    printf("O tipo 'float' aceita valores de %e a %e\n", FLT_MIN, FLT_MAX);
    printf("O tipo 'double' aceita valores de %e a %e\n", DBL_MIN, DBL_MAX);
    return 0;
}