#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*
• Crie um algoritmo que receba:
- o nome de três bandas musicais;
- e cinco integrantes para cada banda.

- Exemplo:
1a banda: ***
1a integrante: ***
2a integrante: ***
*/

void main(){

//declaração de avariaveis

char banda[3][5][250];
int i, j;


    for ( i = 0; i < 3; i++){
        printf("Digite o nome da banda %d\n", i+1);
        gets(banda[i]);
        
        fflush(stdin);
        
            for (j = 0; j < 5; j++){
                printf("Digite o nome do integrante %d\n", i+1);
                gets(banda[i][j]); 
            }
        fflush(stdin);
        system("cls");           
        printf("\n");
    }
    


    // MOSTRANDO DADOS

    for ( i = 0; i < 3; i++){
        printf("Banda %d: %s\n", i+1, banda[i]);

            for (j = 0; j < 5; j++){
                printf("Integrante %d: %s\n", j+1, banda[i][j]);
            }
        fflush(stdin);
        system("cls");           
        printf("\n");
    }
    
}







