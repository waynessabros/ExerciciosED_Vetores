//2) Escreva um programa em C que encontra o maior elemento em um vetor de 10
//valores digitados pelo usuário.
#include <stdio.h>
#include <stdlib.h>
int main(){
    //declarando um vetor
    int v [10], i,j, maior=0;
    //preenchendo o vetor
    for (i = 0; i < 10; i++){
    printf ("Digite %d valor\n", i + 1);
    scanf ("%d", &v[i]);
    }
    for(j = 0; j < 10; j++){
	if(v[j]>maior)
		maior=v[j];
	else
	    maior=maior;
	}
    printf("O maior número eh: %d", maior);
}


