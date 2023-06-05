#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Crie um programa que leia 5 números, armazenando em um
vetor e informe qual é o menor número e o maior.

Mostre os números informados pelo usuário.
*/

void main()
{

    // decalração de variaveis
    int i;
    float numero[5];
    float maiorNumero=INT_MIN, menorNumero=INT_MAX;

    for (i = 0; i < 5; i++)
    {
        printf("Digite um numero:  \n");
        scanf("%f", &numero[i]);

        system("cls");
/*
        if (numero[i] > maiorNumero){
          if (numero[i] < menorNumero){
            menorNumero = numero[i];
          }
            maiorNumero = numero[i];
        } 
*/      

        if (numero[i] > maiorNumero)
        {
            maiorNumero = numero[i];
        }
        

        if (numero[i] < menorNumero)
        {
            menorNumero = numero[i];
        }        

    }
    

    system("cls");

    printf("Mostrando os dados: \n");

    for (i = 0; i < 5; i++)
    {
        printf("Numeros digitados: %f\n", numero[i]);
        printf("\n");
    }

    printf("Maior numero: %f\n", maiorNumero);
    printf("Menor numero: %f\n", menorNumero);

}