#include <stdio.h>
#include <stdlib.h>

int main(){
    double N[100];
    int i;

    scanf("%lf",&N[0]); //le o valor da primeira posição de N[100]
    printf("N[0] = %.4lf\n",N[0]); //exibe o valor da primeira posição do vetor

    for(i=1; i<100; i++){ //passa por todas posições do vetor

        N[i] = N[i-1]/2; //em cada posição subsequente de N[1 até 99], atribui a metade do valor da posição anterior(i-1) ao valor da posição em questão (i), e assim sucessivamente.

        printf("N[%i] = %.4lf\n",i ,N[i]); //exibe as posições N[1 até 99] e seus valores
    }
}
