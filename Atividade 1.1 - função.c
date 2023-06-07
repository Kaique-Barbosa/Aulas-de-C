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

 int soma=0;

 soma += nota;

}

float media_ponderada(float *peso, int contador, float *notas){

  float media=0, soma=0, somaPeso=0, multNotas=0;
  int i, j;
  
  for (i=0; i < contador; i++){
   for(j=0; j < contador; j++){ 

     somaNotas += notas[i][j];
     multNotas = notas[i][j] . peso[i];
    
  }
    
    somaPeso += peso[i];
  }
  
  

  
 media = somaNotas / somaPeso; 
  
  
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

                printf("Digite a nota %d\n", j+1);

                scanf("%f", &notas[i][j]);

                

               //somaNota[i] += notas[i][j];

            }

        //somaNota[i] = somaNota[i] * peso[i];

        somaPeso += peso[i];
        
       // media[i] = (somaNota[i] / somaPeso);
         
        // chamando a função
        



        fflush(stdin);

        system("cls");    

    }


// fazer os calculos da media


    for ( i = 0; i < 3; i++){

            for (j = 0; j < 3; i++){




            }

            



    }

    

    

      }
