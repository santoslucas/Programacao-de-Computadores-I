#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int num, contador_num, maior_num, posicao_maior_num;

    contador_num = 1;
    maior_num = 0;

    while(contador_num <= 100){ //exucuta a fun��o at� ler 100 n�meros
        scanf("%i",&num);

        if(num > maior_num){ //se o valor lido for maior que os anteriores lidos ele � salvo
            maior_num = num;
            posicao_maior_num = contador_num; //salva a posi��o do maior n�mero
        }
        contador_num = contador_num+1; //conta a posi��o de cada n�mero digitado

    }
    printf("%i\n%i\n",maior_num,posicao_maior_num);
}
