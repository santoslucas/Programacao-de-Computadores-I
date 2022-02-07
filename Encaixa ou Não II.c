#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char valorA[1000], valorB[1000];
    int num_testes, tamanhoA, tamanhoB, i, cont, teste=0;

    scanf("%d",&num_testes);

    for(i=0; i<num_testes; i++){

        scanf("%s %s",&valorA, &valorB);

        tamanhoA = strlen(valorA) - 1;
        tamanhoB = strlen(valorB) - 1;
        cont = tamanhoB;

        if(tamanhoB > tamanhoA){
            teste = 1;
        }

        for(tamanhoA; tamanhoB>=0; tamanhoA--,tamanhoB--){
            if(valorA[tamanhoA] != valorB[tamanhoB]){
                teste = 1;
            }
        }

        if(teste == 1){
            printf("nao encaixa\n");
        }

        else{
            printf("encaixa\n");
        }

        teste = 0;
    }

    return 0;

}
