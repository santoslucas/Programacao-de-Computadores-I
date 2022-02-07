#include <stdio.h>
#include <stdlib.h>

int main(){
    int valorM, valorN, soma=0;

    scanf("%i %i",&valorM,&valorN); //recebe os valores iniciais

    while(valorM>0 && valorN>0){ //para o programa quando algum dos valores for menor ou igual a zero

        if(valorM > valorN){ //colocar o valores em ordem crescente
            int tmp;
            tmp = valorN;
            valorN = valorM;
            valorM = tmp;
        }

        for(valorM; valorM<=valorN; valorM++){ //atribui a valorM os seus sucessores, de 1 em 1, at� o valorM>valorN, ou seja, at� acabar a sequ�ncia de n�meros entre os 2 valores
            printf("%i ",valorM); //exibe o valor da sequ�ncia
            soma = soma + valorM; //soma esse valor a soma
        }

        printf("Sum=%i\n",soma);

        soma = 0; //zerar a soma, para que a soma dos inteiros consecutivos entre os 2 valores digitados(soma) n�o seja somada a soma dos inteiros consecutivos entre os pr�ximos valores digitados

        scanf("%i %i",&valorM,&valorN); //recebe o segundo, terceiro, quarto... valores
    }
}
