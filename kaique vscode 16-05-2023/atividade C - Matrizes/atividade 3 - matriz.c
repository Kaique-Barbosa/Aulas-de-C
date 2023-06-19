#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


/*
• Crie um algoritmo que receba o nome de três disciplinas, receba duas notas
para cada disciplina e mostre:

- Exemplo:
Nome da disciplina: Lógica de programação
- 1a nota: 8,0
- 2a nota: 7,0

Média: 6,0
*/

void main(){

//decalração de variavel
int i, j;
char materia[3][250];
float notas[3][2], somaNota=0, media[3];


    for (i = 0; i < 3; i++){
        printf("Digite o nome da disciplina\n");
        gets(materia[i]);

        printf("\n");
            for ( j = 0; j < 2; j++){
                printf("Digite a nota %d\n", j+1);
                scanf("%f",&notas[i][j]);
                somaNota += notas[i][j];
            }
        fflush(stdin); 
        system("cls");    
     media[i] = somaNota / 2;          
    }

    

system("cls");

// MOSTRAR OS DADOS

        for (i = 0; i < 3; i++){
        printf("%s\n", materia[i]);

            for ( j = 0; j < 2; j++){
                printf("Nota %d:  %f\n", j+1, notas[i][j]);
            }
            printf("Media: %f\n", media[i]);
            printf("\n");
    }
    

}