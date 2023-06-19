#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
• Crie um programa usando Struct com as informações abaixo:
• Nome
• Idade
• Peso
• Altura

Utilize os dados informados para solicitar estas informações de 5 usuários.
• Utilize vetor.
• Mostre os dados do usuário.
*/

/*
struct dados_cliente{
    char nome[5][250];
    int idade[5];
    float peso[5], altura[5];
};
*/
struct dados_cliente{
    char nome[250];
    int idade;
    float peso, altura;
};

int main(void){

    int i;

struct dados_cliente cliente[5];

for ( i = 0; i < 5; i++)
{
    printf("Digite o seu nome\n");
    gets(cliente[i].nome);

    fflush(stdin);

    printf("Digite sua idade\n");
    scanf("%d",&cliente[i].idade);

    printf("Digite o seu peso\n");
    scanf("%f",&cliente[i].peso);

    printf("Digite o sua altura\n");
    scanf("%f",&cliente[i].altura);

    fflush(stdin);
    system("cls");
}

// mostrar dados:

for ( i = 0; i < 5; i++)
{

    printf("------------------------------\n");
    printf("nome: %s\n", cliente[i].nome);

    printf("idade: %d\n", cliente[i].idade);

    printf("peso: %.2f\n", cliente[i].peso);

    printf("altura: %.2f\n", cliente[i].altura);
    printf("------------------------------\n\n");
}



}