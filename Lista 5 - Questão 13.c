#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 13. Foi realizada uma pesquisa de algumas características físicas da população de
uma certa região. Foram entrevistadas 10 pessoas e coletados os seguintes dados:
I. Sexo: M (masculino) e F (feminino);
II. Cor dos olhos: A (azuis), V (verdes) e C (castanhos);
III. Cor dos cabelos: L (louros), C (castanhos) e P (pretos);
IV. Idade.

Deseja-se saber:
I. A maior idade do grupo;
II. A quantidade de indivíduos do sexo feminino, cuja idade está entre 18 e 35
anos e que tenham olhos verdes e cabelos louros
*/

int main(){
	setlocale(LC_ALL, "");
    
    int i, idade, maior_idade, cont=0;
    char sexo, olhos, cabelo;
    
    for(i=1; i<=2; i++){
        printf("informe o seu sexo: \n [M] = masculino \n [F] = feminino \n: ");
        scanf(" %c", &sexo);
        system("cls");
        
        printf("cor dos seus olhos: \n");
        printf("[A] azul\n[V] verde\n[C] castanho \n: ");
        scanf(" %c", &olhos);
        system("cls");	
		        
		printf("digite sua idade: ");
        scanf("%d", &idade);
        system("cls");
        
        printf("digite a cor dos seus cabelos \n");
        printf("[L] louros\n[C] castanhos\n[P] pretos \n: ");
        scanf(" %c", &cabelo);
        system("cls");
        
        if(i == 1){
            maior_idade = idade;
        }
        if((sexo == 'F' || sexo == 'f') && idade >= 18 && idade <= 35 && (olhos == 'V' || olhos == 'v') && (cabelo == 'L' || cabelo == 'l')){
            cont++;
        }
        if(idade > maior_idade){
            maior_idade = idade;
        }
    }
    printf("a maior idade do grupo é %d\n", maior_idade);
    printf("A quantidade de pessoas do sexo feminino com idade entre 18 e 35 anos\n");
    printf("e que tem olhos verdes e cabelos louros é %d\n", cont);  
    system("pause");
 return(0);
}