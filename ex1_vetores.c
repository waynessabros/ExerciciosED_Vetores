//Exercício 1.c
//1) Escreva um programa em C que lê 15 números inteiros e os armazena em um vetor.
//A seguir, o programa exibe cada número seguido da mensagem “par” ou “ímpar”.
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
