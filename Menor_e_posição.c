#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamanho_vetorX;
    int i;
    int vetorX[1000];
    int menor_valor, posicao_menor_valor=0;

    scanf("%i",&tamanho_vetorX); //le o tamanho do vetor

    for(i=0; i<tamanho_vetorX; i++){
        scanf("%i",&vetorX[i]); //le o valor da posição "i" do vetorX
    }

    menor_valor = vetorX[0];

    for(i=0; i<tamanho_vetorX; i++){ //passa por todas posições do vetorX

        if(vetorX[i] < menor_valor){ //se o valor lido for menor que o registrado anteriormente em "menor_valor"
            menor_valor = vetorX[i]; //registra o valor como o menor valor
            posicao_menor_valor = i; //registra a posição do valor como a posição do menor valor
        }
    }

    printf("Menor valor: %i\nPosicao: %i\n",menor_valor, posicao_menor_valor); //exibe o menor valor e sua posição
}
