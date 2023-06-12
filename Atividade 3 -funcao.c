#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <locale.h>

/*

Faça um programa em C que imprime uma tabela com a tabuada de um número informado pelo usuário de 1 a 10.

*/

int menu(int numero){

  int opcao;

  

  printf("1 para multiplicação\n");

  printf("2 para divisão\n");

  printf("3 para soma\n");

  printf("4 para subtração\n");

  scanf("%d", &opcao);

  

  return opcao;

}

void mult(int numero){

   int i;

   int resultado=0;

  

system("clear");

  for(i=0; i < numero; i++){

    printf("%d x %d = %d\n",numero,i, resultado = numero * i);

  }

}

void divi(int numero){

  

 int i;

   int resultado=0;

  

system("cls");

  for(i=0; i < numero; i++){ 

    printf("%d / %d = %d\n", numero, i, resultado = numero / i);

  }

}

void soma(int numero){

  

 int i;

   int resultado=0;

  

system("cls");

  for(i=0; i < numero; i++){

    printf("%d + %d = %d\n",numero, i, resultado = numero + i);

  }

}

void sub(int numero){

  

 int i;

   int resultado=0;

  

system("cls");

  for(i=0; i < numero; i++){ 

    printf("%d - %d = %d\n",numero, i, resultado = numero - i);

  }

}

// comeco do main----------------------------------------------------------------------

int main(){

//declaraÃ§Ã£o de variavei

  int numero=0;

  int opcao;

  char resposta;

do{

  printf("Digite um numero: \n");

  scanf("%d",&numero);

 //chamando a funcao

  opcao = menu(numero);

   if(opcao == 1){

     mult(numero);

   }

  if(opcao == 2){

    divi(numero);

  }

  if(opcao == 3){

     soma(numero);

 }

 if(opcao == 4){

     sub(numero);

  }

   

  printf("/n /n");

  printf("deseja outra tabuada?\n");

  printf("s /n \n");

  scanf("%c", &resposta);

  //fflush(stdin);

}while(resposta == 's');

    	return 0;}
