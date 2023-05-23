#include <stdio.h>
#include <stdlib.h>

//4. Elabore um algoritmo para receber dois inteiros como entrada do teclado e escreva na tela:  
//A média, a soma, o produto, o menor valor e o maior valor. 
//Usando uma linha para cada resultado. 


int main(){

int i;
int  maiorValor,menorValor,soma, media, produto; 
int valor[2];

for (i=1; i <=2; i++){
printf("Digite um valor inteiro\n");
scanf("%d", &valor[i]);
}

system("cls");


for (i=1; i <=2; i++){
    soma = soma + valor[i];
    if (valor[i] > maiorValor){
        maiorValor = valor[i];
    }else{
        menorValor = valor[i];
    }
}

media = (soma / 2);
produto = (soma * 2);

// MOSTRANDO RESULTADO

printf("Media: %1d\n",media);
printf("Sooma: %1d\n",soma);
printf("Produto: %1d\n", produto);
printf("Maior Valor: %1d\n",maiorValor);
printf("Menor Valor: %1d\n",menorValor);

    return 0;
}
