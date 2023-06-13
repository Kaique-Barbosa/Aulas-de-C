#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
/*
Usando funções, crie um algoritmo que leia 3 disciplinas e 2 notas para cada uma delas.

[ 1 ] – Mostrar nome da disciplina e a média;
[ 2 ] – O nome da disciplina e a situação (aprovado, reprovado ou recuperação);
[ 3 ] – Exibir todas as informações;
[ 0 ] – Sair do programa.

• Utilize o switch-case.

• Verifique cada nota, impedindo que o programa continue caso a nota informada seja
maior que 10 ou menor que 0;
*/
void main(){

    for ( i = 0; i < 3; i++){
        printf("Digite a disciplina");
        gets(nomeDisciplina);
        for ( j = 0; j < 2; j++){
            printf("Digite o a nota %d", i+1);
            
        }
        
    }
    

}