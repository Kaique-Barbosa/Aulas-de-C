#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
• Implemente um programa que leia as informações de um livro com
os seguintes dados:
• Nome
• Autor
• Categoria
• Preço

Armazene os dados em uma estrutura com vetor para 3 livros.
Mostre os dados do livro.
*/

struct user_dados{
    char nome[250];
    char autor[250];
    char categoria[250];
    float preco;
};


int main(void){

    struct user_dados usuario[3];
    int i;

for(i=0; i < 3; i++){

    printf("Digite seu nome: \n");
    gets(usuario[i].nome);

    fflush(stdin);

    printf("Digite o autor: \n");
    gets(usuario[i].autor);

    fflush(stdin);

    printf("Digite a categoria: \n");
    gets(usuario[i].categoria);

    fflush(stdin);

    printf("Digite  o preco: \n");
    scanf("%f", &usuario[i].preco);

    fflush(stdin);
    system("cls");
}

    system("cls");

for(i=0; i < 3; i++){

    printf("Nome: %s\n", usuario[i].nome);
    printf("Autor: %s\n", usuario[i].autor);
    printf("Categoria: %s\n", usuario[i].categoria);
    printf("Valor: %f\n", usuario[i].preco);
    printf("\n");
    
}

}
