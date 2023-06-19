#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct dados{
    int idade;
    char nome[250];
    float peso;
    float altura;
};



int main(){


    struct dados pessoa;
    

    printf("Digite seu nome\n");
    gets(pessoa.nome);

    printf("Digite sua idade\n");
    scanf("%d", &pessoa.idade);

    printf("Digite seu peso\n");
    scanf("%f", &pessoa.peso);

    printf("Digite sua altura\n");
    scanf("%f", &pessoa.altura);

    system("CLS");

// mostrar na tela

    printf("Nome: %s\n", pessoa.nome);

    printf("Idade: %d\n", pessoa.idade);

    printf("Peso: %.2f\n", pessoa.peso);

    printf("Altura: %.2f\n", pessoa.altura);


    return 0;
}