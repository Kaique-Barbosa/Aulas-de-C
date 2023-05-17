#include <stdio.h>
#include <stdlib.h>

//2. Elabore um algoritmo para ler um valor e escrever a mensagem: “É MAIOR QUE 10!”. 
//Se o valor lido for maior que 10, caso contrário escrever “NÃO É MAIOR QUE 10!" 
//Verifique se o número digitado é igual a 10, caso seja, escreva a mensagem: "O número é igual a 10!" 


int main(){

float valor;

printf("Digite um valor\n");
scanf(" %f", &valor);

if (valor >= 10){
    if (valor == 10){
        printf("O valor e igual a 10\n");
    } else{
        printf("O valor e maior que 10\n");
    }
}else{
    printf("O valor e MENOR que 10\n");
}

system("pause");

return 0;

}