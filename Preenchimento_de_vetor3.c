#include <stdio.h>
#include <stdlib.h>

int main(){
    double N[100];
    int i;

    scanf("%lf",&N[0]); //le o valor da primeira posi��o de N[100]
    printf("N[0] = %.4lf\n",N[0]); //exibe o valor da primeira posi��o do vetor

    for(i=1; i<100; i++){ //passa por todas posi��es do vetor

        N[i] = N[i-1]/2; //em cada posi��o subsequente de N[1 at� 99], atribui a metade do valor da posi��o anterior(i-1) ao valor da posi��o em quest�o (i), e assim sucessivamente.

        printf("N[%i] = %.4lf\n",i ,N[i]); //exibe as posi��es N[1 at� 99] e seus valores
    }
}
