#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct ficha_pessoa pessoa;
{
    char nome[250];
    int idade;
    float peso, altura;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    struct ficha_pessoa pessoa;
    {

        printf("Digite seu nome:\n ");
        gets(pessoa.nome);

        printf("Digite a sua idade: \n");
        scanf("%d", &pessoa.idade);

        printf("Digite o seu peso:\n ");
        scanf("%f", pessoa.peso);

        printf("Digite a sua altura:\n ");
        scanf("%f", pessoa.altura);
    } return 0;
}