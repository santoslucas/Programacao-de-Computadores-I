#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int linhas,num=1,contador_linhas=0;

    scanf("%i",&linhas);

    while(contador_linhas < linhas){ //executa a fun��o at� a quantidade de linhas desejadas ser expressa
       printf("%i %i %i\n",num,(num*num),(num*num*num));
       num = num+1; //vai para o pr�ximo n�mero
       contador_linhas = contador_linhas+1; //conta quantas linhas j� foram digitadas    }
}
}
