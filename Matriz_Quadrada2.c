#include <stdio.h>
#include <stdlib.h>

int main(){
    int N=1,i,j,tmp1,tmp2;

    while(N!=0){
        scanf("%i",&N); //l� a ordem da matriz

        if(N==0){ //se a ordem(N) da matriz for 0, o programa para
            break;
        }

        for(i=0; i<N; i++){
            tmp1=i+1;
            tmp2=2;

            for(j=0; j<N; j++){
                if(i==j){
                    printf("%3d",1); //a diagonal sempre ser� 1
                }

                if(i>j){
                    printf("%3d",tmp1);
                    tmp1--;
                    /*Sempre que i>j os elementos da linha estar�o em ordem decrescente
                      ent�o como tmp1=i+1, a cada impress�o o valor de tmp diminui em 1 (tmp1--)
                    */
                }

                if(i<j){
                    printf("%3d",tmp2);
                    tmp2++;
                    /*Sempre que i<j os elementos da linha estar�o em ordem crescente
                      ent�o como tmp2=2, a cada impress�o o valor de tmp aumentar� em 1 (tmp2++)
                    */
                }

                if(j!=N-1){ //n�o imprime espa�o no ultimo elemento da linha
                    printf(" "); //imprimir espa�o
                }


            }
            if(N!=0){
            printf("\n");//saltar uma linha
            }
      }
      if(N!=0){
      printf("\n");//saltar +1 linha
      }
    }

}
