#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
• Implemente um programa que leia o nome, a idade e o endereço de
uma pessoa e armazene os dados em uma estrutura.

• Mostre os dados do usuário.
*/

struct usuario_dados{
    char nome[250];
    int idade;
    char endereco[500];
};


int main(void){

struct usuario_dados usuario;

    printf("Digite seu nome\n");
    gets(usuario.nome);

    fflush(stdin);

    printf("Digite sua idade\n");
    scanf("%d", &usuario.idade);

    fflush(stdin);

    printf("Digite seu endereco\n");
    gets(usuario.endereco);

    system("cls");

    
    printf("nome: %s\n", usuario.nome);

    printf("idade: %d\n", usuario.idade);

    printf("endereco: %s\n", usuario.endereco);


}