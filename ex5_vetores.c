//5) Escreva um programa em C que calcula a média de elementos armazenados em um
//vetor de 30 posições.
#include <stdio.h>
#include <stdlib.h>
int main(){
    //declarando um vetor
    int v [30], i, soma=0;
    //preenchendo o vetor
    for (i = 0; i < 30; i++){
    printf ("Digite %d valor\n", i + 1);
    scanf ("%d", &v[i]);
    }
    for(i = 0; i < 30;i++){
    	soma = v[i]+soma;
	}
	printf("Media dos elementos armazenados no vetor: %d", soma/30);
}
