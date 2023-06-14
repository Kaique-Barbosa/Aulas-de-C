#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

/*
Desenvolva um programa que simule as 4 operações matemáticas básicas.

A entrada para a escolha de uma das 4 operações disponíveis é dada da seguinte forma:
• Soma
• Subtração
• Multiplicação
• Divisão

Seguida dos 2 operandos que participarão efetivamente da operação.
*/

int menu(){

    int opcao=0;

    printf("Escolha um numero:\n \n");
    printf("[1] - soma\n");
    printf("[2] - subtracao\n");
    printf("[3] - multiplicacao\n");
    printf("[4] - divisao\n");
    
    scanf("%d", &opcao);

    system("cls");

    return opcao;

}

float soma(float numero[]){

    int i;
    float resultado=0;

    for ( i = 0; i < 2; i++){
        resultado+= numero[i];
    }
    
    return resultado;
}

float subtracao(float numero[]){

    int i;
    float resultado=0;

        resultado = numero[0] - numero[1];
    
    return resultado;
}

float multiplicacao(float numero[]){

    int i;
    float resultado=0;
   
        resultado= numero[0] * numero[1];

    return resultado;
}

float divisao(float numero[]){

    int i;
    float resultado=1;

        resultado = numero[0] / numero[1] ;

    return resultado;
}




int main(){

    int i;
    float numero[2];
    int opcao;

    for ( i = 0; i < 2; i++){
    printf("Digite o numero %d\n", i+1);
    scanf("%f", &numero[i]);
    }
    
    opcao = menu(1);

    switch (opcao){
    case 1:
        printf("%.2f",soma(numero));
        break;
    case 2:
        printf("%.2f",subtracao(numero));
        
        break;
    case 3:
        printf("%.2f", multiplicacao(numero));
        break;
    case 4:
        printf("%.2f", divisao(numero));
        
        break;
    
    default:
        printf("ERROR! tente novamente");
        break;
    }

    return 0;
}