#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
6. A prefeitura de uma cidade fez uma pesquisa entre seus habitantes,
coletando dados sobre o salário e número de filhos. A prefeitura
deseja saber:

a) total de famílias que responderam a pesquisa;
b) média do salário da população;
c) média do número de filhos;

O final da leitura de dados se dará com a entrada de um salário negativo.
*/



void main(){

    // declaração de variaveis
    float salario=0, filhos=0, somaSalario=0, somaFilhos=0, mediaSalario, mediaFilhos;
    int contador=0;

do{
   
    printf("Digite seu salario\n");
    scanf("%f", &salario);
    fflush(stdin);

    if(salario >= 0){ 
    printf("Digite quantos filhos vc tem\n");
    scanf("%f", &filhos);

    fflush(stdin);
    system("cls");

    // armazenando dados para operações lógicas
    somaSalario += salario;
    somaFilhos += filhos;
    contador++;
   }

} while (salario >= 0);

  system("cls");

    mediaSalario = somaSalario / contador;
    mediaFilhos = somaFilhos / contador;

// imprimir da dos na tela:
printf("O total de familias que responderam foi:  %1.d \n", contador);
printf("A media de salario foi:  %.2f\n",mediaSalario);
printf("A media de filhos foi:  %.2f\n",mediaFilhos);


}
