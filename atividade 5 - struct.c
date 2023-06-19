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

    
};

int main(void){

struct aluno_dados user[5];
int i,j;

for ( i = 0; i < 5; i++){
    
    printf("Digite o nome do aluno: \n");
    gets(user[i].nome);

    fflush(stdin);

    printf("Digite o Numero da matricula: \n");
    scanf("%d", user[i].matricula);

    for ( j = 0; j < 3; j++){
        printf("Digite a nota %d: \n", j+1);
        scanf("%f", &user[i].nota[j]);    
    }

    fflush(stdin);

}



}