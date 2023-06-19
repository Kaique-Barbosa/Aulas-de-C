/*
4. Escrever um programa de computador que leia 5
números inteiros e, ao final, apresente a soma de
todos os números lidos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    
    int i, soma=0, valor[4];

    for (i = 0; i < 5; i++){
        printf("Digite um numero inteiro \n");
        scanf("%d", &valor[i]);

        soma += valor[i];
    }

    printf("A soma de todos os numero e: \n");
    printf("%.1d", soma);

}