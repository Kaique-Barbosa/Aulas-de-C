#include <stdio.h>
#include <stdlib.h>

//3. Elabore um algoritmo para ler o nome de um aluno, sua idade (em anos) e as três notas. Calcular a média anual do aluno. Caso a média do aluno seja menor que 7, o aluno está reprovado. Imprimir: nome, idade, média e se está aprovado ou reprovado.


int main(){

// DECLARACAO DE VARIAVEIS
    float nota[3];
    char nome[20];
    int idade;
    float media;
    int i;
    
//FIM DECLARACAO DE VARIAVEIS


printf("Digite o nome de um aluno\n");
scanf("%s",&nome);
printf("Digite a idade do aluno\n");
scanf("%d",&idade);

for (i=0; i <= 2; i++){
    printf("Digite sua nota","%f",i);
    scanf("%f",&nota[i]);  
}

 system("cls");

//calculos

for (i=0; i <= 2; i++) {
    media = media + nota[i];
}

// imprimir na tela
printf("Nome: %s\n", nome);
printf("Sua idade: %d\n", idade);
printf("Sua media e: %f\n",media);

if (media >= 7 ){
    printf("PARABENS FOI APROVADO\n");
} else{
    printf("PARABENS FOI REPROVADO\n");
}


    return 0;
}