#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int N,num=2;           //N=(limite até onde se conta os pares)

    scanf("%i",&N);

    while(num<=N){         //exucuta a função até o valor de "num" alcançar o numero digitado pelo usuário "N"
        printf("%i^2 = %i\n",num,(num*num)); //mostra o número e seu quadrado
        num = num+2;      //pula para o próximo par
    }
}
