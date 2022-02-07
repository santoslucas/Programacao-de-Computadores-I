#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char frase[5000], letra_inicial;
    int i, cont, controle_repeticao; //cont = contador de aliterações

    while(gets(frase)){
    // lê a frase

        for(i=0; i<strlen(frase); i++){
            frase[i] = tolower(frase[i]);
        /*
        tolower -> transformar todos caracteres da frase em caracteres minúsculos,
        porque uma palavra com uma letra "x" minúscula seguida de uma palavra com essa mesma letra "X" maiúscula ainda é aliteração(monitor sugeriu)
        */
        }

        for(i=0; i<strlen(frase); i++){
        // passa por todas letras da frase

            if(frase[i-1] == ' '){
            // pega apenas a letra inicial de cada palavra, ou seja, a primeira letra após um espaço

                if(letra_inicial == frase[i]){
                // verifica se a letra de frase[i] é igual a letra_inicial anterior
                    if(controle_repeticao == 0){
                    //se o controle de repetição estiver zerado, essa letra não repetiu na palavra anterior
                        cont++;
                        //soma-se 1 ao contador de aliterações

                        controle_repeticao = 1;
                        //controle de repetição se torna 1, pois se essa letra inicial voltar a se repetir na próxima palavra, o IF não será executado, ou seja, não sera somado 1 ao contador
                    }
                }

                else{
                // se essa letra de frase[i] não for igual a letra_inicial anterior, não temos aliteração e essa se torna a nova letra_inicial para as próximas verificações
                    letra_inicial = frase[i];
                    controle_repeticao = 0; //controle de repetição é zerado, pois é uma nova letra
                }
            }

            if(i == 0){
                letra_inicial = frase[i];
            // A primeira letra da primeira palavra não vem após um espaço, porque está no inicio da frase.
            // Então, sempre que o programa começar a primeira posição (frase[0]) não passará pelo primeiro IF e cairá nesse.
            // Dessa forma, salvará essa primeira letra como a primeira letra_inicial
            }
        }

        printf("%i\n",cont);
        cont = 0; //zera o contador para a próxima frase
        controle_repeticao = 0; //controle de repetição é zerado, para iniciar a próxima frase
    }
}

