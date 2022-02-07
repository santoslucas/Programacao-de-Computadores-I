#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,m;
    int i,j;
    int primeiro_esquerda, cont, cont_linha_ante=-1; //inicialmente o contador da linha anterior ser� -1 para n�o conflituar com cont=0
    int escada=0; //inicialmente "escada" � verdadeiro

    scanf("%i %i", &n, &m); //l� o tamanho da matriz (NxM)

    int matriz[n][m];

    for(i=0; i<n; i++){ //l� todos elementos da matriz
        for (j=0; j<m; j++){
            scanf("%i",&matriz[i][j]);
        }

    }

    for(i=0; i<n; i++){
        primeiro_esquerda = 0; //no come�o de cada linha primeiro_esquerda � verdadeiro
        cont = 0; //reinicia o contador a cada linha

        for (j=0; j<m; j++){

            if(primeiro_esquerda==0 && matriz[i][j]==0){ //o contador cresce at� se achar o primeiro n�mero da linha diferente de 0
                cont++; //adiciona 1 ao contador se o elemento � igual a 0 e o primeiro a esquerda � verdadeiro
            }
            else{ //assim um n�mero da linha for diferente de 0 (primeiro a esquerda), o contador parar�, pois primeiro_esquerda=1 (ser� falso)
                primeiro_esquerda = 1; //primeiro a esquerda ser� falso
            }
        }

        if(cont < m  &&  cont <= cont_linha_ante){
                escada = 1; //escada se torna falsa

            /* se o contador da linha for menor ou igual ao contador da linha anterior e
               o contador for menor que o n�mero de elementos na linha,
               significa que h� n�meros diferentes de 0 embaixo do primeiro a esquerda da linha anterior
               ou que, se a linha anterior for nula (cont_linha_ante=5), h� uma linha abaixo dessa linha nula que n�o � nula,
               ou seja, a matriz n�o sera escada (escada=1)
            */
        }

        cont_linha_ante = cont; //guarda o contador da linha, para comparar com o contador da pr�xima linha
    }

    if(escada==0){
        printf("S\n"); //se escada for verdadeiro exibir "S"
    }
    else{
        printf("N\n"); //se escada for falso exibir "N"
    }
}
