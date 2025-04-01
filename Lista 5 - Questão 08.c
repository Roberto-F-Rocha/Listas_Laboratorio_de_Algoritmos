#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 08. Crie um programa que leia um número positivo e imprima seus divisores.
Exemplo: os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.
*/

int main(){
	setlocale(LC_ALL, "");
    
    int i, n1;
    
    printf("insira um número positivo: ");
    scanf("%d", &n1);
    for(i = 1; i <= n1; i++){
        if(n1%i == 0){
            printf("%d\n", n1/i);
        }
    }
    system("pause");
 return(0);
}