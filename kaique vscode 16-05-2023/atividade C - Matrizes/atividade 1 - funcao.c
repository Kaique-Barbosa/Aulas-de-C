#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int maior(float numero1, float numero2){

if (numero1 > numero2){
    return printf("Numero %f e maior", numero1);
} else{
    return printf("numero %f e menor", numero2);
}


}


void main(){

float numero1, numero2;

    printf("Digite um numero\n");
    scanf("%f", &numero1);
    printf("Digite o segundo numero\n");
    scanf("%f", &numero2);

    printf("O resultado e: \n");
    maior(numero1, numero2);

}