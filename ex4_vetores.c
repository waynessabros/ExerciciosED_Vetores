//4) Escreva um programa em C que ordena um vetor de 40 elementos digitados pelo
//usuário.
#include <stdio.h>
#include <stdlib.h>
void ordena();    //declara a função, que vai estar depois da main  
    int v[40];
int main(){          
    int i;
    
	for (i = 0; i < 40; i++){     //Aqui vou pedir ao usuario que digite os vets para ordenar (5)
           printf("Digite os numeros: ");
           scanf("%d", &v[i]);
    }
    ordena(); //chama a função para ordenar
    for (i = 0; i < 40; i++){     //Aqui mostra o vetor ordenado
       printf("numeros ordenados: %d \n", v[i]);
    }
    printf("\n");
    system("pause");
}
void ordena(){          //Aqui é a função ordena
        int i, j, aux;
            for(i = 0; i < 40; i++ ){
                for(j = i + 1; j < 40; j++ ){
                    if( v[i] > v[j] ){
                          aux = v[i];
                          v[i] = v[j];
                          v[j] = aux;
                    }
                }
            }
            printf("\n Ordenado com sucesso!\n\n");
    }
