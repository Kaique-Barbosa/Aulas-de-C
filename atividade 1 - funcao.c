#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int maior_numero(int x, int y){

    if(x > y){
       return x;
    } else{
        return y;
    }
}


int menor_numero(int x, int y){

    if(x < y){
       return x;
    } else{
        return y;
    }
}



int main(){

int numero1=0, numero2=0;

    printf("Digite um numero\n");
    scanf("%d", &numero1);
    printf("Digite o segundo numero\n");
    scanf("%d", &numero2);


    printf ("O maior numero e: %d\n",maior_numero(numero1, numero2));
    printf ("O menor numero e: %d\n",menor_numero(numero1, numero2));

return 0;
}
