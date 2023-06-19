#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

/*
Fazer um programa em C que pergunta um valor em
metros e imprime o correspondente em centímetros.
*/

int menu()
{

    int opcao=0;

    printf("1 para obter o valor em Km\n");
    printf("2 para obter o valor em Cm\n");
    printf("3 para obter o valor em Mm\n");
    scanf("%d", &opcao);

    system("cls");

    return opcao;
}

int main()
{

    int opcao=0;
    float valor=0;

    printf("Digite um valor em metros\n");
    scanf("%f", &valor);

    opcao = menu(valor);


    switch (opcao){
    case 1:
        printf("Valor em Km\n");
        printf("%.2f", valor / 1000);
        break;
    case 2:
        printf("Valor em Cm\n");
        printf("%.2f", valor * 100);        
        break;
    case 3:
        printf("Valor em Mm\n");
        printf("%f", valor * 1000);        
        break;        

    default:
        printf("Error! escolha uma opcao valida!\n");
        sleep(2);
        break;
    }
    


    return 0;
}