#include <stdio.h>
#include <stdlib.h>

int verificar_divisao(int dividendo){ //verificar se o  resto da divisão do valor por 5 e' igual a 2 ou igual a 3

    int resto;
    resto = dividendo%5;

    if(resto == 2 || resto == 3){
        return 1;
    }

    else{
        return 0;
    }
}

int main(){

    int valor1, valor2;
    scanf("%i %i",&valor1, &valor2);

    if(valor1 < valor2){
        for(valor1++; valor2>valor1; valor1++){ //avança um número(entre os 2 valores) por vez
            if(verificar_divisao(valor1)){
                printf("%i\n",valor1); //imprime os valores que passaram pela verificação
            }
        }
    }

    else{
        for(valor2++; valor1>valor2; valor2++){ //avança um número(entre os 2 valores) por vez
            if(verificar_divisao(valor2)){
                printf("%i\n",valor2); //imprime os valores que passaram pela verificação
            }
        }
    }
}
