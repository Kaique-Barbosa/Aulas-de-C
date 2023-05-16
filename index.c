#include <stdio.h> // entrada no telcado

int main()
{
    // variaveis
    //  int -> inteiro
    // float -> real
    // char -> caracter
    // char[] -> caracter
    // igual ==
    // diferente !=

    // int idade = 10;
    // float peso = 50.5;
    // char texto[10] = "Marta";
    // char sexo = 'F';

    int idade;
    float peso;
    char sexo[10];
    char nome[100];

    printf("Digite sua idade:\n");
        scanf("%i", &idade);

    printf("Digite seu peso:\n");
        scanf("%f", &peso);

    printf("Sexo:\n");
        scanf("%s", &sexo);

    printf("Digite seu nome:\n");
         scanf("%s", &nome);

    system("cls"); // para limpar a tela

    printf("Idade: %i\n", idade);
    printf("Peso: %f\n", peso);
    printf("Sexo: %s\n", sexo);
    printf("Nome: %s\n", &nome);

    // printf("Idade: %d\n", idade);
    // printf("Peso: %.2f\n", peso);
    // printf("Texto: %s\n", texto);
    // printf("sexo: %c\n", sexo);

    // %d para inteiro
    //%f para float
    //%c para caracter

    return 0;
}