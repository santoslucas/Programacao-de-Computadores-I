#include <stdio.h>
#include <stdlib.h>

int teste_primo(int numero){ // teste para ver se "x" � primo
    int i,cont=0;

    for(i=1; i<=numero; i++){   //dividir� o n�mero por todos valores entre 1 e ele mesmo
                                //i++ serve para pular para o pr�ximo n�mero entre 1 e o n�mero
        if(numero%i == 0){
            cont++; //se o n�mero for divis�vel por "i" � contabilizado
        }
}
    if(cont == 2){   //se o n�mero for divis�vel apenas por 2 n�meros, 1 e ele mesmo, � primo
        return 1;
    }

    else{
        return 0;
    }
}

int main(){
    int num_casos, x, i;

    scanf("%i",&num_casos);

    for(i=1; i<=num_casos; i++){ //recebe a quantidade (num_casos) de valores
        scanf("%i",&x);

        if(teste_primo(x)){
           printf("%i eh primo\n",x);
        }
        else{
            printf("%i nao eh primo\n",x);
        }

    }
}
