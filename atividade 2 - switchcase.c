#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

/*
Suponha que você esteja desenvolvendo um programa para o caixa da mercearia do seu
bairro.
Esse programa deve ser capaz de somar o valor unitário de um produto do comércio
recebendo como entrada apenas o código identificador dele.
Para verificar o bom funcionamento da funcionalidade de soma de valor através do
código você decidiu realizar testes apenas com uma parte dos produtos vendidos, para
isso criou a seguinte tabela:

Desenvolva o código que será utilizado para a realização dos testes com os três produtos
selecionados.
*/



void main(){
 int i;
 int codigoDigitado;
char produto[3][250];
int codigo[3];
float valor[3];


//for ( i = 0; i < 3; i++){
    printf("dgite o codigo do produto");
    scanf("%d", &codigoDigitado);
//}
  // banco de dados//
produto[0] = "detergente";
codigo[0] = 100; //codigo do produto
valor[0] = 1.59; //valor unitario

produto[1] = "esponja";
codigo[1] = 101; //codigo do produto
valor[1] = 4.59;//valor unitario

produto[2] = "la de aco";
codigo[2] = 102;//codigo do produto
valor[2] = 1.79;//valor unitario

  //fim banco de dados  

for ( i = 0; i < 3; i++){

switch (codigoDigitado){

case  100:
    printf("%s", produto[0]);
    break;

case 101:
    printf("%s", produto[1]);
    break;

case 102:
    printf("%s", produto[2]);
    break;   

default:
    break;
}

}
    
}
