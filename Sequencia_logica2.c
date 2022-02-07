#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int num_por_linhas,numY;      //numeros em cada linha, contar até que numero;
    int sequencia_num = 1;        //sequencia numerica
    int contador_num = 0;         //limite para parar a contagem em "numY"
    int contador_num_linhas = 0;  //contador numeros por linha

    scanf("%i%i",&num_por_linhas,&numY);

    while(contador_num<numY){                      //manter a contagem ate "numY"

        while(contador_num_linhas<num_por_linhas){ //manter numeros na mesma linha
        printf("%i",sequencia_num);
        sequencia_num = sequencia_num+1;
        contador_num_linhas=contador_num_linhas+1;

        if(contador_num_linhas<num_por_linhas){
            printf(" ");                     //espaçamento entre numeros
        }
        }

        printf("\n");                              //pular para outra linha
        contador_num_linhas=0;                     //zerar o contador de numeros em uma linha
        contador_num=contador_num+num_por_linhas;  //contar até chegar em "numY"
    }
}
