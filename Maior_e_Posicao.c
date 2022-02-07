#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int num, contador_num, maior_num, posicao_maior_num;

    contador_num = 1;
    maior_num = 0;

    while(contador_num <= 100){ //exucuta a função até ler 100 números
        scanf("%i",&num);

        if(num > maior_num){ //se o valor lido for maior que os anteriores lidos ele é salvo
            maior_num = num;
            posicao_maior_num = contador_num; //salva a posição do maior número
        }
        contador_num = contador_num+1; //conta a posição de cada número digitado

    }
    printf("%i\n%i\n",maior_num,posicao_maior_num);
}
