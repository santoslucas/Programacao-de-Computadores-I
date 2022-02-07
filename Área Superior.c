#include <stdio.h>
#include <stdlib.h>

int main(){
    double soma=0.0, media=0.0, matriz[12][12];
    char O[2];
    int i,j,i2,j2,cont=10,cont2=1; //i e i2 (linhas) / j e j2 (colunas)

    scanf("%s",&O);

    for(i=0; i<12; i++){ //Lê todos valores da matriz
        for(j=0; j<12; j++){
            scanf("%lf",&matriz[i][j]);
        }
    }

    for(i2=0; i2<=4; i2++){ //vai até a quarta linha
        for(j2=cont2; j2<=cont; j2++){
            soma+=matriz[i2][j2];
        }
        cont--;
        cont2++;

    }

    if(O[0]== 'S'){
        printf("%.1lf\n",soma);
    }

    else if(O[0] == 'M'){
        media = soma/30.0; //faz a media dessa soma
        printf("%.1lf\n",media);
    }
}
