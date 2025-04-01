#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 14. Crie um programa que leia um número inteiro, maior ou igual a zero, do
usuário. Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no
termo de ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos dois
termos anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.
*/

int main(){
	setlocale(LC_ALL, "");
    
    int i, n, n1 = 0, n2 = 1, n3 = 1;
    
    printf("\n\t \\/ Fibonacci \\/\n\n informe um número inteiro: ");
    scanf("%d", &n);
    printf("%d\n", n1);

    for(i = 0; i <= n; i++){
        if(n % 1 == 0 && i == n){
            printf("%d\n",n3);
            n1 = n2+n3;
            return 0;
        }
        printf("%d\n",n3);
        n1 = n2+n3;
        printf("%d\n", n2);
        n2 = n1+n2;
        n3 = n1;
    }
    system("pause");
 return(0);
}