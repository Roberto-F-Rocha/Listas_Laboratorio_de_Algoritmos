#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 20. Uma loja tem vários clientes cadastrados e deseja mandar uma correspondência
a cada um deles anunciando um desconto especial. Escreva um algoritmo que leia o nome e o
valor das compras do ano passado de 12 clientes e calcule um bônus de 10% se o valor das
compras for maior ou igual a R$ 3.000,00, emitindo uma mensagem com o nome do cliente.
*/

int main(){
	setlocale(LC_ALL, "");
    
    int i, n1;
    char nome[20];
    
    for(i = 1; i <= 12; i++){
        printf("nome do cliente: ");
        scanf("%s",nome);
        printf("informe o valor das compras do ano passado: ");
        scanf("%d", &n1);
        if(n1 >= 3000){
            printf("parabéns %s, você recebeu um desconto de R$ %.2f\n", nome, n1*0.10);
        }
    }
    system("pause");
 return (0);
}