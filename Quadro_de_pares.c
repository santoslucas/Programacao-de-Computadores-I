#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int N,num=2;           //N=(limite at� onde se conta os pares)

    scanf("%i",&N);

    while(num<=N){         //exucuta a fun��o at� o valor de "num" alcan�ar o numero digitado pelo usu�rio "N"
        printf("%i^2 = %i\n",num,(num*num)); //mostra o n�mero e seu quadrado
        num = num+2;      //pula para o pr�ximo par
    }
}
