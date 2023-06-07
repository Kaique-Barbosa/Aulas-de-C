#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <locale.h>


/*

â€¢ Crie um algoritmo que receba o nome de trÃªs disciplinas, receba trÃªs notas para

cada disciplina e mostre a mÃ©dia ponderada de cada disciplina:


- Exemplo:

Nome da disciplina: LÃ³gica de programaÃ§Ã£o

1a nota: 8,0 peso 3

2a nota: 9,0 peso 3

3a nota: 7,0 peso 4

MÃ©dia: 7,9

*/


//funÃ§Ã£o para o calculo da media ponderada


float mediaPonderada(float peso[], float notas[][]) {

  float media=0, somaPeso=0,  somaNotas=0;
  int i, j;
  float multNotas[3][3];
  
  for (i=0; i < 3; i++){
  	
	   for(j=0; j < 3; j++){ 
	
	     // Multiplicando os notas pelo peso
	     multNotas[i][j] = (notas[i][j] * peso[i]);
	     
	     //Somando o resultado das multiplicações
	     somaNotas += multNotas[i][j];
    
  }
    
    somaPeso += peso[i];
  }
  
 media = somaNotas / somaPeso; 
  
  return media;
  
}


// comeco do main----------------------------------------------------------------------

int main(){


//declaraÃ§Ã£o de variaveis

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
            }
      
		
        fflush(stdin);
        system("cls");   
		
    }
    
    // mostrando na tela
    
    for(i = 0; i < 3; i++){
    	printf("Materia: %s", disciplina[i]);
    	
	    	for (j = 0; j < 3; j++){
	    		printf("nota: %f",notas[i][j]);
			}
		}
		
    	// chamando a variavel
    	printf( "A media e: %f \n",mediaPonderada(peso, notas));
    	
    	return 0;
}
