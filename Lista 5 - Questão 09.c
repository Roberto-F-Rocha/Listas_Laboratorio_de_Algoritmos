#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 09. Crie um programa que leia um número inteiro e calcule a soma de todos os
divisores desse número, com exceção dele próprio. Exemplo: a soma dos divisores do
número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.
*/

int main(){
	setlocale(LC_ALL, "");
    
    int i,n1;
    float soma;
    
    printf("insira um número inteiro: ");
    scanf("%d", &n1);
    
    for(i=1; i<=n1; i++){
        if(n1%i==0){
            soma = soma + n1/i;
        }
    }
    printf("a soma de todos os divisores de %d é %.0f\n", n1, soma-n1);
    system("pause");
 return 0;
}