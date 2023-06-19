#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Crie uma estrutura representando os alunos de um determinado
curso. A estrutura deve conter a matrícula do aluno, nome, nota da
primeira prova, nota da segunda prova e nota da terceira prova.

(a) Permita ao usuário entrar com os dados de 5 alunos;
(b) Informe a maior nota da primeira prova;
(c) Informe a maior media geral;
(d) Informe a menor media geral;
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o
valor 6 para aprovação.
*/

struct aluno_dados{
    char nome[250];
    int matricula;
    float nota[3];
    float media;
};

int main(void){

struct aluno_dados user[5];
float media=0;
int i,j;
float maiorNota = INT_MIN, maiorMedia = INT_MIN, menorMedia = INT_MAX;


for ( i = 0; i < 5; i++){
    
    printf("Digite o nome do aluno: \n");
    gets(user[i].nome);

    fflush(stdin);

    printf("Digite o Numero da matricula: \n");
    scanf("%d", &user[i].matricula);

    for ( j = 0; j < 3; j++){
        printf("Digite a nota %d: \n", j+1);
        scanf("%f", &user[i].nota[j]);    

        // definir a media
        user[i].media += user[i].nota[j];

                //(b) definir a maior nota
            if(user[i].nota[j] > maiorNota){
                maiorNota = user[i].nota[i];
            }

    }
        // (c)calcular a media geral:
        user[i].media = (user[i].media / 3);

        //Definir a maior media e menor media
        if(user[i].media > maiorMedia){
            maiorMedia = user[i].media;
        }
        if(user[i].media < menorMedia){
            menorMedia = user[i].media;
        }
    fflush(stdin);
    system("cls");

}

// mostrar dados

for ( i = 0; i < 5; i++){
    printf("Nome Aluno: %s\n", user[i].nome);
    printf("Matricula: %d\n",user[i].matricula);
    printf("Maior nota: %f\n",maiorNota);
    printf("Maior media: %f\n", maiorMedia);
    printf("Menor media: %f\n", menorMedia);

   // for ( j = 0; j < 3; j++){
        // definir se foi aprovado meida 6
        if(user[i].media > 6){
            printf("Media: %.2f\n", user[i].media);
            printf("Aprovado\n\n");
        }else{
            printf("Media: %.2f\n", user[i].media);
            printf("Reprovado\n\n");
        }
   // }
    printf("---------------------------------\n\n");
}
}
