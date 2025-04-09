#include <stdio.h>

int main() {
int a, b, soma;


// d) No corpo da função main(), insira a chamada da 
// função printf() para imprimir a sequência de Fibonacci
//  da forma abaixo usando o formato %i.

    printf("%8i %i  \n", 1, 1);
    printf("%7i %i %i \n", 1, 2, 1);
    printf("%5i %i %i %i %i \n", 1, 2, 3, 2 ,1);
    printf("%3i %i %i %i %i %i %i \n", 1 ,2, 3, 5, 3, 2, 1);
    printf("%i %i %i %i %i %i %i %i %i\n \n", 1, 2, 3 ,5, 8, 5, 3, 2, 1);
   

    printf("------------------------------------- \n \n");

    // d) No corpo da função main(), utilize a função printf() 
    // para imprimir um boletim de notas de forma tabular, ou seja, 
    // usando o caractere especial \t para separar os dados nos formatos %i e %f.
   
    printf("%5s %5s %5s %10s \n", "Matricula", "A1", "A2", "Media");
    printf("%5s %7.1f %5.1f %7.1f \n","20210010", 8.5, 5.0, 6.4);
    printf("%5s %7.1f %5.1f %7.1f \n","20215053", 4.7, 10.0, 7.9);
    printf("%5s %7.1f %5.1f %7.1f \n","20220027", 5.6, 8.3, 7.2);
    printf("%5s %7.1f %5.1f %7.1f \n","20220103", 9.2, 1.5, 4.6);

    printf("------------------------------------- \n \n");


    // d) No corpo da função main(), utilize a função printf() 
    // para imprimir uma nota legal conforme leiaute abaixo, 
    // usando os formatos %s, %i e %f

    printf("===============================\n");
    printf("     N O T A   L E G A L \n");
    printf("=============================== \n");
    printf("%5s %10s %12s \n", "Produto", "Qtd", "Valor Unit");
    printf("%5s %9.03i %12.2f \n","Camiseta", 001, 39.99);
    printf("%5s %12.03i %12.2f \n","Calca", 002, 89.90);
    printf("%5s %6.03i %12.2f \n","Meia Social", 003, 19.99);
    printf("=============================== \n");
    printf("%s %24.2f \n", "Total:", 229.85);

   
   
   
    return 0;
}
