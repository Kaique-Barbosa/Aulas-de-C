#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


/*
Crie um programa que leia 6 números, armazenando em um
vetor e informe quantos são pares e quantos são ímpares.

Mostre os números informados pelo usuário.
*/


void main(){

int i, numero[6], contPar=0, contImpar=0;

for ( i = 0; i < 6; i++)
{
    printf("Digite um numero\n");
    scanf("%d", &numero[i]);    
 
    if (numero[i] % 2 == 0){
        contPar++;
    }else{
        contImpar++;
    }

}

system("cls");

for ( i = 0; i < 6; i++)
{
 printf("Os numeros foram: %d\n", numero[i]);
}

printf("\nss");


    printf("Valores pares:  %d\n", contPar);
    printf("Valores impares:  %d\n", contImpar);
}