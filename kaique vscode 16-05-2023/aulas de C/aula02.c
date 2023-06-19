#include <stdio.h>
#include <stdlib.h>

int main(){

// declaração de aviaveis
int idade;

// EGT DE IDADE
printf("Digite sua idade\n");
scanf("%d",&idade);
system("cls");

printf("Sua idade e: %d \n", idade);


if (idade >= 18){
    printf("Maior de Idade\n");
} else{
    printf("Menor de Idade\n");    
}

system("pause");
return 0;
}