#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 17. Crie um programa que calcule e escreva o valor de S:
*/

int main (){
	setlocale(LC_ALL, "");
    
    int i, n1 = 1;
    float s = 0;
    
    for(i = 1; i <= 55; i++){
        s += n1/i;
        n1+=2;
    }
    printf("o resultado é %.2f\n", s);
    system("pause");
 return(0);
}