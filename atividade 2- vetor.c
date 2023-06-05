#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Crie um programa que leia 4 notas, armazenando em um
vetor e calcule a média aritmética.

Verifique a situação do aluno considerando:
- Média maior ou igual a 7: Aprovado.
- Média maior ou igual a 5: Recuperação.
- Média menor que 5: Reprovado.

Mostre as 4 notas informadas pelo usuário e informe a média.
*/

void main(){


//declaração de variaveis
int i;
float notas[4], somaNotas, media;


for (i = 0; i < 4; i++){
   printf("Digite a nota %d\n", i +1);
   scanf("%f",&notas[i]);
   somaNotas += notas[i];
}

// CALCULOS PARA MEDIA
media = somaNotas / 4;

system("cls");

if (media >= 7){
    printf("APROVADO! \n");
} else if (media >= 5){
    printf("EM RECUPERACAO \n");
}else{
    printf("REPROVADO! \n");
}

 printf("\n");

for (i = 0; i < 4; i++){
   printf("Nota %d:  %f\n", i +1, notas[i]);
   
}


}