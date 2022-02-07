#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int num_casos, i, j, tamanho;
    char texto[52], mensagem_oculta[52];

    scanf("%i", &num_casos);
    getchar();

    while(num_casos--){
    //executa o programa até o num_casos zerar.
    //obs: antes usei FOR, mas estava excedendo o tempo limite

        gets(texto);
        //lê o texto
        tamanho  = strlen(texto);

        for(i=0, j=0; i<tamanho; i++){
        //passa por todo string "texto"

            if(texto[i-1]==' ' && texto[i]!=' '){
                mensagem_oculta[j] = texto[i];
                //se a posição de "texto" é diferentes de ' ' e vem depois de um ' ', ela é parte da mensagem_oculta
                j++;
                //passa para próxima posição de mensagem_oculta[j]

            }

            else if(i==0 && texto[i]!=' '){
                mensagem_oculta[j] = texto[0];
                //se a primeira posição de "texto" for diferente de ' ' ela faz parte da mensagem_oculta,
                //mas como texto[0] não se encaixa nos requisitos do primeiro IF, pois não é precedido de um ' '
                //este IF compensa essa falha
                j++;
                //passa para próxima posição de mensagem_oculta[j]
            }
        }

        mensagem_oculta[j] = '\0';
        //finaliza a string

        printf("%s\n",mensagem_oculta);

        tamanho = 0;
    }
}
