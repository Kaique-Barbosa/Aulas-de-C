#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*
Crie um programa que leia 3 notas, armazenando em um
vetor e calcule a média aritmética.

Mostre as 3 notas informadas pelo usuário e informe a média.
*/



void main(){

setlocale(LC_ALL, "");

//declara��o de aviaveis
int i;
float nota[3], soma, media;


    for (i = 0; i < 3; i++)
    {
        printf("Digite a %d� nota\n", i+1 );
        scanf("%f", &nota[i]);

    fflush(stdin);

        system("cls");
    }

    for (i = 0; i < 3; i++)
    {
        soma += nota[i];
    }

    media = soma / i;

    for (i = 0; i < 3; i++)
    {
        printf("As notas foram, %d� nota: %f\n", i+1 ,nota[i]);
    }   

    printf("Media: %f.2", media);
    

}