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

        for(valorM; valorM<=valorN; valorM++){ //atribui a valorM os seus sucessores, de 1 em 1, até o valorM>valorN, ou seja, até acabar a sequência de números entre os 2 valores
            printf("%i ",valorM); //exibe o valor da sequência
            soma = soma + valorM; //soma esse valor a soma
        }

        printf("Sum=%i\n",soma);

        soma = 0; //zerar a soma, para que a soma dos inteiros consecutivos entre os 2 valores digitados(soma) não seja somada a soma dos inteiros consecutivos entre os próximos valores digitados

        scanf("%i %i",&valorM,&valorN); //recebe o segundo, terceiro, quarto... valores
    }
}
