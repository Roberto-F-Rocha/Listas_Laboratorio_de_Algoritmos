#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 01. Crie um programa que mostre uma contagem regressiva na tela, iniciando em
10 e terminando em 1. Mostre uma mensagem “FIM!” após a contagem.
*/

int main(){
    setlocale(LC_ALL, "");

    int n1;

    for(n1 = 10; n1 >= 1; n1--){
        printf("\n%d", n1);
    }
    printf("\nfim :)\n\n");
    system("pause");
 return(0);
}