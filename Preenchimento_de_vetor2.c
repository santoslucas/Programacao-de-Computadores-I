#include <stdio.h>
#include <stdlib.h>

int main(){
    int N[1000];
    int valorT; //valor a ser lido
    int i,k; //variáveis

    scanf("%i",&valorT);

    for(i=0,k=0; i<1000; i++,k++){ //passa por todas posições de N[1000], altera o valor de k para que k represente os valores de 0 até valorT-1.
        N[i] = k;

        if(k == valorT-1){ //quando k atinge o valorT-1, seu valor é "zerado" e a sequencia (0 até valorT-1) reinicia.
            k = -1;//-1, porque ao passar pelo incremento k++, k será igual a 0 (zerará o valor de K)
        }
    }

    for(i=0; i<1000; i++){
        printf("N[%i] = %i\n",i, N[i]); //exibe todas posições de N[1000] e seus valores
    }
}
