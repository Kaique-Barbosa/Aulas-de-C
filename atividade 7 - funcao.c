#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
/*
O índice de massa corpórea (IMC) de um
indivíduo é obtido dividindo-se o seu peso (em
Kg) por sua altura (em metros) ao quadrado.
Assim, por exemplo, uma pessoa de 1,67m e
pesando 55kg tem IMC igual a 20,14, já que:

Escreva um programa que solicite ao utilizador
o fornecimento do seu peso em kg e de sua
altura em m e a partir deles calcule o índice de
massa corpórea do utilizador.
*/

void main(){
    float peso, altura;
    float calcularIMC(float peso, float altura);

    printf("Digite seu peso em Kg\n");
    scanf("%f", &peso);
    printf("Digite sua altura em M\n");
    scanf("%f", &altura);

    printf("%.2f", calcularIMC(peso, altura));
}

float calcularIMC(float peso, float altura){
    float imc=0;
    imc = peso / (altura * altura);
    return imc;
}