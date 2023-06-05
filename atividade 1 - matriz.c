#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*
Crie um algoritmo que receba o três notas de 2 semestres e mostre:

- 1o semestre:
- 1a nota: 7
- 2a nota: 9
- 3a nota: 8

- 2o semestre:
- 1a nota: 8
- 2a nota: 7
- 3a nota: 3
*/

void main(){

    int i, j;
    char semestre[2][300];
    float notas[2][3];


    for (i = 0; i < 2; i++){
        printf("Digite o semeste :\n");
        gets(semestre[i]);
        system("cls");

            for ( j = 0; j < 3; j++){
                printf("Digite a nota  %i \n",j+1);
                scanf("%f", &notas[i][j]);                
            }
        system("cls");
        fflush(stdin);
    }
    

system("cls");

// MOSTRAR DADOS:

     for (i = 0; i < 2; i++){
        printf(" %s semeste: \n", semestre[i] );

            for ( j = 0; j < 3; j++){
                printf("Nota: %.1f\n",notas[i][j]);
            }
        
    }

}