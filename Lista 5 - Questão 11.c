#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Exercício 11. A Veja Bem é uma startup que vai começar a atuar no ramo de entretenimento,
publicando em seu site a percepção que o público tem dos filmes que estão sendo exibidos
nos cinemas da cidade. Para isso, instalaram quiosques nos cinemas, nos quais os
espectadores poderão atribuir uma nota de 0 a 4 a cada filme exibido. Considerando a opinião
de 5 espectadores e a avaliação de 4 filmes para cada espectador, crie um programa que
calcule e exiba:
I. O filme com maior avaliação;
II. O filme com menor avaliação.
*/

int main(){
	setlocale(LC_ALL, "");
    
    int i, cont, filme[4], maior_nota, menor_nota;
    
    for(i = 1; i <= 4; i++){  
       printf("qual a nota do %d filme?: ", i);
	   scanf("%d", &filme[i]);
        if(i==1){
          maior_nota = filme[i];
          menor_nota = filme[i];
        }
        if(filme[i]>maior_nota){
           maior_nota = filme[i];
        }
        else if(filme[i]<menor_nota){
            menor_nota = filme[i];
        }  
   }
	for(i=1; i<=4; i++){
            if(filme[i]==maior_nota){
                printf("o filme %d foi o filme mais votado\n", i);
            }
			else if(filme[i]==menor_nota){
                printf("o filme %d foi o filme menos votado\n", i);
            }
    }
    system("pause");
 return(0);
}