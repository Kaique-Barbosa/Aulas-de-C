#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


/*
• Crie um algoritmo que receba o nome de três disciplinas, receba três notas para
cada disciplina e mostre a média ponderada de cada disciplina:

- Exemplo:
Nome da disciplina: Lógica de programação
1a nota: 8,0 peso 3
2a nota: 9,0 peso 3
3a nota: 7,0 peso 4
Média: 7,9
*/

//função para o calculo da media ponderada

float somaNotas(float nota){
 int soma;
 soma += nota;
 return soma;
}







void main(){

//declaração de variaveis
int i,j;
float notas[3][3], somaNota[3], peso[3], somaPeso, media[3];
char disciplina [3][250];


    for (i = 0; i < 3; i++){
        printf("Digite o nome da disciplina: \n");
        gets(disciplina[i]);

        fflush(stdin);

        printf("Digite o peso: \n");
        scanf("%f", &peso[i]);

            for (j = 0; j < 3; j++){
                printf("Digite a nota %d", j+1);
                scanf("%f", &notas[i][j]);
                
               //somaNota[i] += notas[i][j];
            }
        //somaNota[i] = somaNota[i] * peso[i];
       // somaPeso += peso[i];
       // media[i] = (somaNota[i] / somaPeso);

        fflush(stdin);
        system("cls");    
    }

// fazer os calculos da media

    for ( i = 0; i < 3; i++){
            for (j = 0; j < 3; i++){
              somaNotas(notas[i][j]);  

            }
            

    }
    
    
}