#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char frase[5000], letra_inicial;
    int i, cont, controle_repeticao; //cont = contador de alitera��es

    while(gets(frase)){
    // l� a frase

        for(i=0; i<strlen(frase); i++){
            frase[i] = tolower(frase[i]);
        /*
        tolower -> transformar todos caracteres da frase em caracteres min�sculos,
        porque uma palavra com uma letra "x" min�scula seguida de uma palavra com essa mesma letra "X" mai�scula ainda � alitera��o(monitor sugeriu)
        */
        }

        for(i=0; i<strlen(frase); i++){
        // passa por todas letras da frase

            if(frase[i-1] == ' '){
            // pega apenas a letra inicial de cada palavra, ou seja, a primeira letra ap�s um espa�o

                if(letra_inicial == frase[i]){
                // verifica se a letra de frase[i] � igual a letra_inicial anterior
                    if(controle_repeticao == 0){
                    //se o controle de repeti��o estiver zerado, essa letra n�o repetiu na palavra anterior
                        cont++;
                        //soma-se 1 ao contador de alitera��es

                        controle_repeticao = 1;
                        //controle de repeti��o se torna 1, pois se essa letra inicial voltar a se repetir na pr�xima palavra, o IF n�o ser� executado, ou seja, n�o sera somado 1 ao contador
                    }
                }

                else{
                // se essa letra de frase[i] n�o for igual a letra_inicial anterior, n�o temos alitera��o e essa se torna a nova letra_inicial para as pr�ximas verifica��es
                    letra_inicial = frase[i];
                    controle_repeticao = 0; //controle de repeti��o � zerado, pois � uma nova letra
                }
            }

            if(i == 0){
                letra_inicial = frase[i];
            // A primeira letra da primeira palavra n�o vem ap�s um espa�o, porque est� no inicio da frase.
            // Ent�o, sempre que o programa come�ar a primeira posi��o (frase[0]) n�o passar� pelo primeiro IF e cair� nesse.
            // Dessa forma, salvar� essa primeira letra como a primeira letra_inicial
            }
        }

        printf("%i\n",cont);
        cont = 0; //zera o contador para a pr�xima frase
        controle_repeticao = 0; //controle de repeti��o � zerado, para iniciar a pr�xima frase
    }
}

