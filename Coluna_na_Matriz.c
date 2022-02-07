#include <stdio.h>
#include <stdlib.h>

int main(){
    double soma=0.0, media=0.0, matriz[12][12];
    char T[2];
    int coluna,i,j;


    scanf("%d",&coluna); //coluna pra efetuar a soma ou a media
    scanf("%s",&T);

    for(i=0; i<12; i++){ //Lê todos valores da matriz
        for(j=0; j<12; j++){
            scanf("%lf",&matriz[i][j]);
            if(j == coluna){
                soma += matriz[i][j]; //soma todos valores da coluna escolhida
            }
        }
    }

    if(T[0]== 'S'){
        printf("\n%.1lf\n",soma);
    }

    else if(T[0] == 'M'){
        media = soma/12.0; //faz a media dessa soma
        printf("\n%.1lf\n",media);
    }
}

