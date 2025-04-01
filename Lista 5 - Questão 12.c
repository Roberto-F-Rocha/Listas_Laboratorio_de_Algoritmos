#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 12. Foi feita uma pesquisa entre alguns habitantes de uma região para coletar os
seguintes dados: sexo (0-feminino, 1-masculino), idade e altura. Crie um algoritmo que leia
as informações de 10 pessoas e calcule:
I. média da idade do grupo;
II. média da altura das mulheres;
III. média da idade dos homens;
IV. Total de pessoas com idade entre 18 e 35 anos (inclusive).
*/

int main(){
	setlocale(LC_ALL, "");
    
    int sexo,i,idade, soma_idade=0,idade_h=0, idade_pessoas=0;
    float alt, alt_mulher=0;
    
    for(i = 1; i <= 3; i++){
        system("cls");
        printf("pessoa %d\n", i);
        
        printf("Informe o seu sexo:\n [1] feminino \n [2] masculino: ");
        scanf("%d", &sexo);
        system("cls");
        
        printf("digite sua idade: ");
        scanf("%d", &idade);
        system("cls");
        
        soma_idade = soma_idade + idade;

        printf("digite sua altura: ");
        scanf("%f", &alt);
        system("cls");
        
        if(sexo == 1){
            alt_mulher = alt_mulher + alt;
        }
        else if(sexo == 2){
            idade_h = idade_h + idade;
        }
        if(idade >= 18 && idade <= 35){
            idade_pessoas++;
        }
    }
    printf("a mÃ©dia de idade do grupo Ã© %d\n", soma_idade/3);
    printf("a mÃ©dia de altura das mulheres Ã© %.2f\n", alt_mulher/3);
    printf("a mÃ©dia de idade dos homens Ã© %d\n", idade_h);
    printf("o total de pessoas com idade entre 18 e 35 Ã© %d\n", idade_pessoas);
    system("pause");
 return(0);
}