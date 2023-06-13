#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

/*
• Escreva um programa que permita ler 3 notas de um aluno e informe por meio de
funções: • A média; • Com base na média, se o aluno está aprovado ou reprovado 7 .
*/

void main(){

    int i;
    float media[3];
    void situacao(float media[]);


    for ( i = 0; i < 3; i++)
    {
        printf("Digite a nota %d\n", i+1);
        scanf("%f", &media[i]);
    }

    situacao(media);
    
}

void situacao(float media[]){
    int i;
    float mediafinal=0;
 
    system("cls");

    for (i = 0; i < 4; i++){
        mediafinal += media[i];
    }

         mediafinal = mediafinal / 3;

        printf("Sua media e: %.1f\n", mediafinal);

        if(mediafinal > 7){
            printf("Voce esta aprovado");
        }else{
            printf("Voce esta reprovado");
        }
    

}
