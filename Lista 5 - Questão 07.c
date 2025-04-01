#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 07. Crie um programa que leia 10 números e escreva o menor e o maior valores
lidos.
*/

int main(){
	setlocale(LC_ALL, "");
    
    int i, maior_n, menor_n, n1;
    
    for(i = 1; i <= 10; i++){
        printf("insira um número: ", i);
        scanf("%d", &n1);
        if(i == 1){
            maior_n = n1;
            menor_n = n1;
        }
        if(n1 > maior_n){
            maior_n = n1;
        }
        else if(n1 < menor_n){
            menor_n = n1;
        }
    }
    printf("o maior número inserido foi %d e o menor foi %d\n", maior_n, menor_n);
    system("pause");
 return(0);
}