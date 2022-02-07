#include <stdio.h>
#include <stdlib.h>

int main(){
    int X[10];
    int i;

    for(i=0; i<10; i++){ //ler os 11 valores do vetor
        scanf("%i",&X[i]);

        if(X[i] <= 0){ //se o valor for nulo ou negativo, substituir seu valor por 1
            printf("X[%i] = 1\n",i);
        }

        else{ //caso contrário exibir seu valor
            printf("X[%i] = %i\n",i,X[i]);
        }
    }
}
