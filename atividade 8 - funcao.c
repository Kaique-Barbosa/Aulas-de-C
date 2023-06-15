#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
/*
Usando funções, crie um algoritmo que leia 3 disciplinas e 2 notas para cada uma delas.

[ 1 ] – Mostrar nome da disciplina e a média;
[ 2 ] – O nome da disciplina e a situação (aprovado, reprovado ou recuperação);
[ 3 ] – Exibir todas as informações;
[ 0 ] – Sair do programa.

• Utilize o switch-case.

• Verifique cada nota, impedindo que o programa continue caso a nota informada seja
maior que 10 ou menor que 0;
*/

int menu(int i)
{
    int resposta;

    printf("Escolha uma opcao\n");
    printf("\n \n");

    printf("[ 1 ]  Mostrar nome da disciplina e a media\n");
    printf("[ 2 ]  O nome da disciplina e a situacao (aprovado, reprovado ou recuperacao)\n");
    printf("[ 3 ]  Exibir todas as informacoes\n");
    printf("[ 0 ]  Sair do programa\n");

    scanf("%d", &resposta);

    if (resposta >= 0 && resposta <= 3)
    {
        return resposta;
    }
    else
    {
        printf("ERROR!\n");
    }
}

float media(float notas[][2])
{

    int i, j;
    float somaNota = 0, mediaFinal = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            somaNota += notas[i][j];
        }
        mediaFinal += somaNota / j;
        somaNota = 0;
    }
    mediaFinal = mediaFinal / i;
    return mediaFinal;
}

void mostrarNomeEmedia(char disciplina[][250], float notas[][2])
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        printf("Disciplina %s\n", disciplina[i]);
        printf("\n");

        for (j = 0; j < 2; j++)
        {
            printf("nota %d: %.2f\n", j + 1, notas[i][j]);
            printf("\n");
        }
    }

    printf("Media: %f", media(notas));
}

void mostrarNomeEsituacao(char disciplina[][250], float notas[][2])
{

    int i;
    for (i = 0; i < 3; i++)
    {
        printf("Materia: %s\n", disciplina[i]);
    }

    printf("Situacao: \n");
    if (media(notas) > 7)
    {
        printf("APROVADO");
    }
    else
    {
        printf("REPROVADO");
    }
}

void mostrarTudo(nomeDisciplina, notas)
{

    mostrarNomeEmedia(nomeDisciplina, notas);
    printf("\n \n");
    mostrarNomeEsituacao(nomeDisciplina, notas);
}

int main()
{
    char nomeDisciplina[3][250];
    float notas[3][2];
    int i, j;

    for (i = 0; i < 3; i++)
    {
        printf("Digite a disciplina\n");
        gets(nomeDisciplina[i]);

        fflush(stdin);

        for (j = 0; j < 2; j++)
        {
            do // corrigido
            {
                printf("Digite o a nota %d\n", j + 1);
                scanf("%f", &notas[i][j]);
            } while (notas[i][j] < 0 || notas[i][j] > 10);
        }
        // if((notas[i][j] <= 10) && (notas[i][j] >= 0)){
        //   system("cls");
        //   printf("ERROR! Foi digitado um valor negativo ou acima de 10\n");
        //   return 0;
    }

    fflush(stdin);
    system("cls");

    switch (menu(i))
    {
    case 0:
        /* code */
        break;
    case 1:
        mostrarNomeEmedia(nomeDisciplina, notas);
        break;
    case 2:
        mostrarNomeEsituacao(nomeDisciplina, notas);
        break;
    case 3:
        mostrarTudo(nomeDisciplina, notas);

        break;

    default:
        printf("ERROR!!!!, REENICIE O PROGRAMA!");
        break;
    }

    return 0;
}
