
#include <stdio.h>
#include <stdlib.h>

//7. Elabore um algoritmo usando operações lógicas para informar se uma pessoa é obrigada a votar. 
//Considere que a regra é que menores de 18 e maiores que 65 não são obrigados a votar. 

void main(){

    int idade;

    printf("Digite sua idade\n");
    scanf("%i", &idade);
    //fgets se passar da quantidade determinada ele pega ate o limite e ignora o resto

    fflush(stdin);// limpar cache

    if(idade >= 18 && idade <= 65){
        printf("Voce e obrigado a votar");
    } else{
        printf("Voce *NAO* e obrigado a votar");
    }


}