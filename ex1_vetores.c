//Exerc�cio 1.c
//1) Escreva um programa em C que l� 15 n�meros inteiros e os armazena em um vetor.
//A seguir, o programa exibe cada n�mero seguido da mensagem �par� ou ��mpar�.
#include <stdio.h>
#include <stdlib.h>
int main(){
    //declarando um vetor
    int v [15], i;
    //preenchendo o vetor
    for (i = 0; i < 15; i++){
    printf ("Digite %d valor\n", i + 1);
    scanf ("%d", &v[i]);
    }
    for (i = 0; i < 15; i++){
    printf("v[%d]=%d:%s\n", i, v[i], v[i] % 2 == 0 ? "par" : "impar");
    }
    return 0;
}
