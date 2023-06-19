#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

/*
Desenvolva um programa que receba como entrada um número inteiro
que represente um dos 7 dias da semana e imprima na tela se esse dia
é útil, final de semana ou inválido.

Considere que Domingo é o dia 1 e Sábado o dia 7.
*/

void diaUtil(int diaSemana){

switch (diaSemana){
case 1:
    printf("Domingo- final de semana");
    break;
case 2:
    printf("segunda- dia util");
    break;
case 3:
    printf("terca- dia util");
    break;
case 4:
    printf("quarta- dia util");
    break;
case 5:
    printf("quinta- dia util");
    break;
case 6:
    printf("sexta- dia util");
    break;

case 7:
    printf("sabado- final de semana");
    break;

default:
    printf("Invalido");
    break;
}

}


void main(){

    int diaSemana;

    printf("digite qual dia da semana deseja\n");
    printf("Considere que Domingo e o dia 1 e Sabado o dia 7.\n");
    scanf("%d", &diaSemana);
    diaUtil(diaSemana);


}
