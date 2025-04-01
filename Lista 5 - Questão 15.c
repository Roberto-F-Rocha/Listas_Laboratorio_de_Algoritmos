#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 15. Crie um programa que receba um número inteiro maior do que 1 e verifique se
o número fornecido é primo ou não
*/

int main(){
	setlocale(LC_ALL, "");
    
    int i, n1, cont=0;
    
    printf("\n \\/ primo ou não? \\/informe um número inteiro maior que 1: ");
    scanf("%d", &n1);
    for(i = 1; i <= n1; i++){
        if(n1 % i == 0){
            cont++;
        }
    }
    if(cont <= 2){
        printf("seu número é primo\n");
    }
    else{
        printf("seu número não é primo\n");
    }
    system("pause");
 return(0);
}