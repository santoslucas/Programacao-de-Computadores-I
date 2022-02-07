 #include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
   int quntidade_valores,valor,contador_de_numeros,in,out;
   in = 0;
   out = 0;
   scanf("%i",&quntidade_valores);

    while(contador_de_numeros != quntidade_valores) { //executa a função até o usuário digitar a quantidiade de valores
    scanf("%i",&valor);

        if(10<=valor && valor<=20){
            in = in+1;                  //+1 valor está fora do intervalo

    }
        else{
            out = out+1;                //+1 valor está fora do intervalo
    }
        contador_de_numeros++;        //soma 1 ao a variavel para uma hora ela ficar igual a quantidade de valores
   }
   printf("%i in\n%i out\n",in,out);  //mostrar quantos numeros estão dentro e fora do intervalo
   }
