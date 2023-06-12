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

int menu(int quantidade[], float valor[]){

  printf("chocolate: %d \n", quantidade[0]);
  printf("Valor: %f", valor[0]);

  printf("Pamonha: %d\n", quantidade[1]);
  printf("Valor: %f", valor[1]);

  printf("Repelente: %d\n", quantidade[2]);
  printf("Valor: %f", valor[2]);

  printf("Batata: %d\n", quantidade[3]);
  printf("Valor: %f", valor[3]);
  
  for ( i = 0; i < 4; i++){
    switch (quantidade[i])
    {
    case quantidade[i] < 100:
        valor[i] = valor[i] + (valor[i] * 0.1);
        break;
    case quantidade[i] >= 100:
        valor[i] = valor[i] + (valor[i] * 0.2);
        break;
    default:
        break;
    }
    }

      return valor[i] ;
}
  

int main(){
    int menuu;
    int quantidade[3];
    float valor[3];
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
    printf("Qual produto quer ler o preco?");
    //chamando funcao
    menuu = menu (quantidade, valor);

    return 0;
}