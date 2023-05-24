/*
5. Escreva um algoritmo que leia a média de um aluno. Caso seja
menor que 0 ou maior que 10, mostre a pergunta novamente.

Após receber a média, verifique se o aluno está aprovado ou
reprovado considerando que a média para aprovação é maior ou igual
a 7. Caso a média seja até 5, o aluno está em recuperação, caso seja
menor que 5, o aluno está reprovado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){

    
    float nota, soma=0, media=0;
    int contador=0;
    char valor;

do
    {
        printf("Digite uma nota \n");
        scanf("%f", &nota);

        //soma = soma + nota;
        soma += nota;
       // contador = contador + 1;
        contador++;


        fflush(stdin);//limpa cache (buffer). 
        //comando necesario para realizar a pergunta abaixo

        printf("Deseja digitar mais uma nota? s / n \n"); 
        scanf("%c", &valor);
        // outro metodo alem do fflush é adicionar um espaço " %C"0

        system("cls");

    } while (valor == 's'); // para comparar tbm posso usar o srtcmp() no caso de string;

    media = soma / contador;

    if(media >=7){
    printf("PARABENS, VOCE FOI APROVADO\n");
    } else if (media == 5){
    printf("voce esta em recuperacao\n");
    } else{
    printf("Voce foi reprovado, estude mais\n");
    }

    printf("Sua media foi: %.1f", media);


}



