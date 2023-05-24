/*
1. Escreva um algoritmo que pergunte ao usuário se deseja inserir
mais uma nota, se a resposta do usuário for “NÃO”, o programa
fará a média aritmética das notas informadas e mostrará a média
aritmética para o usuário.

Obs.: Use um contador dentro do laço de repetição para contar a
quantidade e iterações (loops).
*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
    // decalração de variaveis

    float nota, soma, media;
    int contador;
    char valor;

    contador = 0;
    
    do
    {
        printf("Digite uma nota \n");
        scanf("%f", &nota);

        soma = soma + nota;
        contador = contador + 1;

        media = soma / contador;

        fflush(stdin);//limpa cache (buffer). 
        //comando necesario para realizar a pergunta abaixo

        printf("Deseja digitar mais uma nota? s / n \n"); 
        scanf("%c", &valor);
        // outro metodo alem do fflush é adicionar um espaço " %C"0

    } while (valor == 's');

    printf("A media aritimetica obtida foi: \n");
    printf("%.1f", media);
}