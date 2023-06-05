#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*
• Crie um algoritmo que leia o nome e a idade de 5 pessoas,
armazenando em vetores.

- Liste o nome e a idade de cada pessoa.
*/

void main(){

char nome[5] [10];
int i;

for ( i = 0; i < 5; i++)
{
    printf("Digite um nome\n");
    gets(nome[i]);
    system("cls");
}

system("cls");

printf("Os nomnes foram: \n");

for ( i = 0; i < 5; i++)
{
    printf("%s\n", nome[i]);
}

}