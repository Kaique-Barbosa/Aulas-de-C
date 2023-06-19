#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
8. Faça um algoritmo que leia uma quantidade não
determinada de números positivos. Calcule:
a) quantidade de números pares e ímpares;
b) média de valores pares

O número que encerrará a leitura será zero.
*/

void main(){

    //declaracao de variaveis
    int somaPar=0, somaImpar=0;
    int contPar=0, contImpar=0;
    int numero;
    float mediaPar=0, mediaImpar=0;
    do{
        printf("Digite um numero\n");
        scanf("%d", &numero);

        fflush(stdin);

        if(numero != 0){
            if (numero % 2 == 0){
                somaPar += numero;
                contPar++;
            } else{
                somaImpar += numero;
                contImpar++;
            }
        }

        system("cls");
    } while (numero != 0);
    
    mediaPar = somaPar / contPar;
    mediaImpar = somaImpar / contImpar;

    printf("A quantidade de numeros fora: \n");
    printf("Par: %1.d\n", contPar);
    printf("Impar: %1.d\n", contImpar);
    printf("Media de Pares: %.2f\n", mediaPar);
    printf("Media de Impares: %.2f\n", mediaImpar);
}