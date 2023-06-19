#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Faça um programa que realize a leitura dos seguintes dados relativos a
um conjunto de alunos:

Matricula, Nome, Código da Disciplina, Nota1 e Nota2. Considere uma
turma de até 10 alunos.

Após ler todos os dados digitados, e depois de armazená-los em um
vetor de estrutura, exibir na tela a listagem final dos alunos com as
suas respectivas medias finais.
*/

struct user_dados{
    int matricula;
    char nome[250];
    int codDisciplina;
    float nota[2];
    float media, somaMedia;
};



int main(void){

int i,j;
float  mediaTotal=0;
struct user_dados user[10];

for (i = 0; i < 10; i++){
        fflush(stdin);
    printf("Digite o nome do aluno\n");
    gets(user[i].nome);
        fflush(stdin);
    
    printf("Digite a matricula do aluno: \n");
    scanf("%d",&user[i].matricula);


    printf("Digite o codigo da disciplina\n");
    scanf("%d",&user[i].codDisciplina);

    for ( j = 0; j < 2; j++){
        printf("Digite a nota %d\n", j+1);
        scanf("%f",&user[i].nota[j]);

        user[i].somaMedia+= user[i].nota[j];
    }
    
    user[i].media = user[i].somaMedia /2;
    fflush(stdin);
    system("cls");

    mediaTotal+= user[i].media;
}

mediaTotal = mediaTotal / i;

//mostrar

for ( i = 0; i < 10; i++){
    printf("Matricula: %d\n", user[i].matricula);
    printf("Nome: %s\n", user[i].nome);
    printf("Cod Disciplina: %d\n",user[i].codDisciplina);
    printf("Media: %.2f\n", user[i].media);
    printf("-----------------------\n\n");
}
    printf("Media total: %.2f\n", mediaTotal);
    system("pause");
}