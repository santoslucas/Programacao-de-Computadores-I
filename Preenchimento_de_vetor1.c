#include <stdio.h>
#include <stdlib.h>

int main(){
    int N[10];
    int i;

    scanf("%i",&N[0]);
    printf("N[0] = %i\n",N[0]); //exibe o valor da primeira posi��o do vetor

    for(i=1; i<10; i++){ //passa por todas posi��o do vetor N[]
        N[i] = N[i-1] * 2; // "Em cada posi��o subsequente, coloque o dobro do valor da posi��o anterior."
        printf("N[%i] = %i\n",i,N[i]);
    }
}
