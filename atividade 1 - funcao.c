#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int resultado(int x, int y){

    if(x > y){
       return x;
    } else{
        return y;
    }
}



void main(){

int numero1=0, numero2=0, result;

    printf("Digite um numero\n");
    scanf("%d", &numero1);
    printf("Digite o segundo numero\n");
    scanf("%d", &numero2);


    printf ("O maior numero e: %d",resultado(numero1, numero2));

}
