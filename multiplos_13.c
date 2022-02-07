#include <stdio.h>
#include <stdlib.h>

int mult_13(int valor){   //verifica se o valor a ser somado é multiplo de 13
    int teste_valor;

    teste_valor = valor%13;

    if(teste_valor == 0){
        return 0; //se for multiplo de 13 não é somado
}
    else{
        return 1;
    }
}

int main(){
    int x, y, soma=0, retorno;
    scanf("%d %d",&x,&y);

    if(x > y){
        y = y-1; //apenas para já não começar o while pulando y

        while(x != y){
            y++; //passa para o próximo número entre x e y
            retorno = mult_13(y);

            if(retorno == 1){
                soma = soma + y;
            }
        }
        printf("%d\n",soma);
    }

    else if(x < y){
        x = x-1; //apenas para já não começar o while pulando x

        while(y != x){
            x++; //passa para o próximo número entre x e y
            retorno = mult_13(x);

            if(retorno == 1){
                soma = soma + x;
            }
        }
        printf("%d\n",soma);
    }

    else if(x == y){
        printf("0\n");
    }
}

