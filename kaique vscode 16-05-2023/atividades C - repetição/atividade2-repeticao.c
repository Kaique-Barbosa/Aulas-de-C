#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
2. Escreva um algoritmo que leia 5 valores inteiros e ao final
mostre:

a) quantos números são pares;
b) quantos números são impares;

*/

void main()
{

    int i, valor, contPar, contImpar;

    contPar = 0;
    contImpar = 0;


    for (i = 0; i < 5; i++)
    {
        printf("Digite um numero inteiro \n");
        scanf("%d", &valor);

        //fflush(stdin);

        if (valor % 2 == 0)
        {
            contPar++;
        }
        else
        {
            contImpar++;
        }
    }

    system("CLS");

    printf("A quantidade de par foram: \n %d", contPar);
    printf("\n --------------------------------------- \n");
    printf("A quantidade de impar foram: \n %d", contImpar);
}