#include <stdio.h>
#include <stdlib.h>

//Elabore um algoritmo para ler um valor e escrever a mensagem: É MAIOR QUE 10! se o valor lido for maior que 10, caso contrário escrever "NÃO É MAIOR QUE 10! 

int main(){

float numero;

printf("Digite um valor\n");
scanf(" %f",&numero);

if (numero >= 10){
    printf("O Numero e maior que 10\n");
} else{
    printf("O Numero NAO e maior que 10\n");
}

system("pause");
    return 0;
}