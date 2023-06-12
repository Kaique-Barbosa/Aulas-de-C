#include <stdio.h>

#include <stdlib.h>

#include <string.h>
#include <locale.h>
#include <time.h>

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

  //sleep(5);

  return opcao;

}

void mult(int numero){

   int i;

   int resultado=0;

system("cls");

  for(i=0; i <= numero; i++){

    printf("%d x %d = %d\n",numero,i, resultado = numero * i);

  }

}

void divi(float numero){

 float i;

   float resultado=0;

system("cls");

  for(i=0; i < numero; i++){ 

    printf("%f / %f = %.2f\n", numero, i+1, resultado = numero / (i+1));

  }

}

void soma(int numero){

 int i;

   int resultado=0;

system("cls");

  for(i=0; i <= numero; i++){

    printf("%d + %d = %d\n",numero, i, resultado = numero + i);

  }

}

void sub(int numero){

  

 int i;

   int resultado=0;

system("cls");

  for(i=0; i <= numero; i++){ 

    printf("%d - %d = %d\n",numero, i, resultado = numero - i);

  }

}

// comeco do main----------------------------------------------------------------------

int main(){

//declaraÃ§Ã£o de variavei

  int numero=0;

  int opcao=0;

  char resposta;

do{

  printf("Digite um numero: \n");

  scanf("%d",&numero);

 //chamando a funcao

  opcao = menu(numero);

  switch (opcao){
  case 1:
    mult(numero);
    break;

    case 2: 
    divi(numero);
    break;

    case 3:
    soma(numero);
    break;

    case 4:
    sub(numero);
    break;
  
  default:
        printf("Opcao incorreta!");
    break;
  }

   

  printf("\n");

  printf("deseja outra tabuada?\n");

  printf("s /n \n");

  fflush(stdin);

  scanf("%c", &resposta);

  //fflush(stdin);
    system("cls");
}while(resposta == 's');

    	return 0;}
