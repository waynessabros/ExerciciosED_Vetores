//Exercício 3.c
//3) Escreva um programa em C que encontra a “moda” em um vetor de 20 elementos
//digitados pelo usuário. Na estatística, a moda de uma coleção de valores é aquele que
//aparece com maior frequência, desempatando arbitrariamente.

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]){
    //declarando o vetor
    int v [] = {15, 4, 3, 2, 1, 5, 7, 5, 4, 0};
    int moda, modaAux, freq = 1, freqAux = 0, i, j;
    moda = v[0];
    for (i = 1; i < 10; i++){
        freq = v[i] == moda ? freq + 1 : freq;
    }
    for (i = 1; i < 10; i++){
        modaAux = v[i];
        freqAux = 0;
        for(j = 0; j < 10; j++){
            if(v[j] == modaAux)
             ++freqAux;
        }
        if(freqAux >= freq){
            moda = modaAux;
            freq = freqAux;
        }
    }
    printf("A Moda é %d, com frequencia de %d\n", moda, freq);
    
    return 0;
}
