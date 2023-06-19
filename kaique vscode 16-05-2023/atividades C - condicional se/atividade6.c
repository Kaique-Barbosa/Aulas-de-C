#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 6. Elabore um algoritmo para receber o login e a senha de um usuário.
// Caso o usuário e a senha estejam corretos, mostre a mensagem "Bem-vindo!", caso contrário, mostre a mensagem "Login ou senha inválidos."

// O gets é utilizado para texto

int main()
{

        //declaração de variaveis

        char loginSalvo[50] = "Aluno", senhaSalvo[50] = "12345";
        char login[50], senha[50];


        printf("Digite seu login\n");
        gets(login);

        fflush(stdin);//limpa cache (buffer).

        printf("Digite seu login\n");
        gets(senha);    

        if(strcmp(login, loginSalvo) == 0  && strcmp(senha, senhaSalvo ) == 0 ){
            printf("Parabens, login efetuado ");  
        } else{
            printf("tente novamente, recusado");
        }

    return 0;
}