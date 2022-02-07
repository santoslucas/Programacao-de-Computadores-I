#include <stdio.h>
#include <stdlib.h>

int verificar_impar(int valor){ //verificar se o valor é impar
    int resto;

    resto = valor%2;

    if(resto != 0){ //se o resto for diferente de 2 significa que o valor não é par, é ímpar
        return 1;
    }

    else{
        return 0;
    }
}

int main(){

    int valor1, valor2, soma=0;
    scanf("%i %i",&valor1, &valor2);

    if(valor1 > valor2){ //colocar o valores em ordem crescente
        int tmp;
        tmp = valor2;
        valor2 = valor1;
        valor1 = tmp;
    }

    for(valor1++; valor1<valor2; valor1++){ //passar por todos valores entre valor1 e valor2
        if(verificar_impar(valor1)){
            soma = soma + valor1; //se o valor for ímpar, ele é somado a soma
        }
    }

    printf("%i\n", soma);
}
