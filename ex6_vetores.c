//6) Escreva um programa que preenche um vetor de 10 posi��es com valores
// digitados pelo usu�rio. Declare um outro vetor que dever� conter
//esses mesmos valores, s� que sem repeti��es.
#include<stdio.h>
#include<stdlib.h>	
int main(){

    int v1[4], v2[4];
    int i, j, k = 0;
	
	for(i=0; i<=4; i++){
		scanf("%d ", &v1[i]);
	}
 
    for( i=0; i<4; i++){
        for(j=0; j<k; j++){
            if( v1[i] == v2[j])
                break;
        }

        if(j == k){
            v2[k] = v1[i];
            k++;
        }
    }

    printf("Vetor 1: ");
    for(i=0; i<4; i++)
        printf("%d ", v1[i] );
    printf("\n");
	
	printf("Vetor 2: ");
    for(i=0; i<k; i++)
        printf("%d ", v2[i] );
    printf("\n");
    
	
	
	return 0;
}
