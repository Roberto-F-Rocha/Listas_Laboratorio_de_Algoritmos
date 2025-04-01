#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 19. Crie um programa que leia um valor inteiro e positivo N, calcule o mostre o
valor E, conforme a fórmula a seguir:
*/

int main(){
	setlocale(LC_ALL, "");
    
    int i, n1, fat, cont;
    float e=0;
    
    printf("insira o valor: ");
    scanf("%d", &n1);
    fat=n1;
    for(cont=1; cont<=n1; cont++){
        for(i=1; i<=cont; i++){
            fat = fat*i;
        }
        e = e + 1.0/fat;
    }
    printf("o valor de (E) é : %.2f\n", e);
    system("pause");
return (0);
}