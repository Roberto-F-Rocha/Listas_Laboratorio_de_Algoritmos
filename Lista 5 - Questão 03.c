#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 03. Crie um programa que leia um número inteiro positivo N e imprima todos os
números naturais de 0 até N em ordem crescente.
*/

int main(){
	setlocale(LC_ALL, "");

    int n1, i;

    printf("insira um número inteiro positivo: ");
    scanf("%i", &n1);
    
    for(i = 0; i <= n1; i++){
        printf("%d\n", i);
    }
    system("pause");
 return(0);
}