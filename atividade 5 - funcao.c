#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

/*
Fazer um programa em C que lê o preço de um produto e inflaciona esse
preço em 10% se ele for menor que 100 e em 20% se ele for maior ou
igual a 100.
*/

int mostrarValor(int quantidade[], float valor[]){

    int i;
  for ( i = 0; i < 4; i++){

        if (quantidade[i] < 100){
            valor[i] = valor[i] + (valor[i] * 0.1);
        } 
         if (quantidade[i] >= 100){
            valor[i] = valor[i] + (valor[i] * 0.2);
        }    
    }

  printf("chocolate: %d \n", quantidade[0]);
  printf("Valor: %f\n", valor[0]);

  printf("\n");

  printf("Pamonha: %d\n", quantidade[1]);
  printf("Valor: %f\n", valor[1]);

  printf("\n");

  printf("Repelente: %d\n", quantidade[2]);
  printf("Valor: %f\n", valor[2]);

  printf("\n");

  printf("Batata: %d\n", quantidade[3]);
  printf("Valor: %f\n", valor[3]);

  printf("\n");
  
    
      return valor[i] ;
}

/*
void menu(char nome[]){

    int i;

    for ( i = 0; i < 4; i++)
    {
        printf("%s", nome[i]);
    }
    
}
*/

  

int main(){
    int menuu;
    int quantidade[4];
    float valor[4];
    char nome[4][250];

 // banco de dados   
quantidade[0] = 200;
quantidade[1] = 300;
quantidade[2] = 40;
quantidade[3] = 2;

valor[0] = 2.99;
valor[1] = 34.99;
valor[2] = 23.75;
valor[3] = 25.99;


// ----------------
    printf("Qual produto quer ler o preco?\n");
      printf("\n");

    //chamando funcao
    menuu = mostrarValor(quantidade, valor);

    return 0;
}
