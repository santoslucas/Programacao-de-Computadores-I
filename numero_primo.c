#include <stdio.h>
#include <stdlib.h>

int teste_primo(int numero){ // teste para ver se "x" é primo
    int i,cont=0;

    for(i=1; i<=numero; i++){   //dividirá o número por todos valores entre 1 e ele mesmo
                                //i++ serve para pular para o próximo número entre 1 e o número
        if(numero%i == 0){
            cont++; //se o nùmero for divisível por "i" é contabilizado
        }
}
    if(cont == 2){   //se o número for divisível apenas por 2 números, 1 e ele mesmo, é primo
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
