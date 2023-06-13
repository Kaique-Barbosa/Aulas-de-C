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

int menu(int i){
int resposta;

printf("Escolha uma opcao");
printf("\n \n");

printf("[ 1 ] – Mostrar nome da disciplina e a média");
printf("[ 2 ] – O nome da disciplina e a situação (aprovado, reprovado ou recuperação)");
printf("[ 3 ] – Exibir todas as informações");
printf("[ 0 ] – Sair do programa");

scanf("%d", &resposta);

if(resposta >= 0 && resposta <= 3 ){
return  resposta;
}else{
    printf("ERROR!");
}
}

float media(float notas[][2]){

    int i,j;
    float somaNota=0, mediaFinal=0;

    for ( i = 0; i < 3; i++){
        for ( j = 0; j < 2; j++){
            somaNota += notas[i][j];
        }
            mediaFinal = somaNota / j; 
    }
     return mediaFinal;
}

void mostrarNomeEmedia(char disciplina[250], float media[][2]){
    int i,j;

    for ( i = 0; i < 3; i++){
        for (  j= 0; j < 2; j++){
        printf("Disciplina %s", disciplina);
        printf("Media: %f", media);    
        }
    }
}

void mostrarNomeEsituacao(char nome[][250]){
    
    int i;
    for ( i = 0; i < 3; i++){
       
        printf("Materia: %s\n", nome[i][250]);
     
    }
/*
    printf("Situacao: \n");
if (mediaFinal > 7){
        printf("APROVADO");
    }else{
        printf("REPROVADO");
    }
*/

}

//void mostrarTudo(mostrarNomeEmedia(),mostrarNomeEsituacao()){
    
}

void main(){
    char nomeDisciplina[3][250];
    float notas[3][2];
    int i,j;

    for ( i = 0; i < 3; i++){
        printf("Digite a disciplina");
        gets(nomeDisciplina[i]);

        fflush(stdin);

        for ( j = 0; j < 2; j++){
            printf("Digite o a nota %d", i+1);
            scanf("%f", &notas[i][j]);  
        }        
    }
    
    switch (menu(1)){
    case 0:
        /* code */
        break;
    case 1:
        mostrarNomeEmedia(nomeDisciplina, notas);
        break;
    case 2:
        mostrarNomeEsituacao(nomeDisciplina);
        break;
    case 3:
        /* code */
        break;
    
    default:
        break;
    }
}
