
// 5. Elabore um algoritmo para receber dois inteiros como entrada do teclado e escreva na tela:
// A média, a soma, o produto, o menor valor e o maior valor.
// Além disso, verifique se os números informados pelo usuário são iguais.
// Usando uma linha para cada resultado.

#include <stdio.h>
#include <stdlib.h>

void main()
{

    int i;
    int maiorValor, menorValor, soma, media, produto;
    int valor[2];

    for (i = 0; i < 2; i++)
    {
        printf("Digite um valor inteiro\n");
        scanf("%d", &valor[i]);
    }

    system("cls");

    for (i = 0; i < 2; i++)
    {
        soma = soma + valor[i];
        if (valor[i] > maiorValor)
        {
            maiorValor = valor[i];
        }
        else
        {
            menorValor = valor[i];
        }
    }

    media = (soma / 2);
    produto = (valor[0] * valor[1]);

    // MOSTRANDO RESULTADO
    printf("Media: %.1d\n", media);
    printf("Soma: %.1d\n", soma);
    printf("Produto: %.1d\n", produto);

    // Verificar se os valores são iguais
    if (valor[0] == valor[1]){
        printf("Os valores digitados sao iguais");
    }
    else
    {
        printf("Maior Valor: %.1d\n", maiorValor);
        printf("Menor Valor: %.1d\n", menorValor);
    }
}
