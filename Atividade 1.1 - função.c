#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <locale.h>

/*

â€¢ Crie um algoritmo que receba o nome de trÃªs disciplinas, receba trÃªs notas para

cada disciplina e mostre a mÃ©dia ponderada de cada disciplina:


- Exemplo:

Nome da disciplina: LÃ³gica de programaÃ§Ã£o

peso 3

1a nota: 5,0 

2a nota: 5,0 

3a nota: 5,0 

MÃ©dia: 7,9

*/


//funÃ§Ã£o para o calculo da media ponderada

float mediaPonderada(float peso[], float notas[][3]) {

  float media=0, somaPeso=0,  somaNotas[3], somaResultado=0;
  int i, j;
  float multNotas[3];
  
  for (i=0; i < 3; i++){
  	
	   for(j=0; j < 3; j++){ 
	
      //somando os as 3 notas de uma unidade
      somaNotas[i] += notas[i][j]; 
  }
      //somando os valores de todos os pesos
      somaPeso += peso[i];

      // Multiplicando a soma das 3 notas pelo  peso
	    multNotas[i] = ((somaNotas[i] / 3) * peso[i]);
	     
	     //Somando o resultado das multiplicações
	    somaResultado += multNotas[i]; 

    media = (somaResultado / somaPeso);
    
  }
  
  return media;
}


// comeco do main----------------------------------------------------------------------

int main(){

//declaraÃ§Ã£o de variaveis
int i,j;

float notas[3][3], somaNota[3], peso[3], media[3];

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
    	printf("Materia: %s\n", disciplina[i]);
    	
	    	for (j = 0; j < 3; j++){
	    		printf("nota: %.1f\n",notas[i][j]);
			}
      printf("Peso: %1.f\n\n", peso[i]);
     
		}
		 printf("-----------------------------------------");
    	// chamando a variavel
    	printf( "A media e: %.1f \n",mediaPonderada(peso, notas));
    	
    	return 0;
}
