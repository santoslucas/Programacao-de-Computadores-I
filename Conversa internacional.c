#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num_testes, num_pessoas, mesmo_idioma=0, i=1;
    char idioma[21], idioma_anterior[21];

    scanf("%i",&num_testes); 
    //le o numero de testes desejados

    while (num_testes--)
    //executa o codigo até num_testes zerar
    {
        scanf("%i",&num_pessoas);
        //le o numero de pessoas que vão participar do teste
        getchar();

        while (num_pessoas--)
        //executa o codigo ate num_pessoas zerar, ou seja, ate ler todos idiomas das mesmas
        {
            gets(idioma);
            //le o idioma

            if(i == 1)
            //Executa apenas no primeiro idioma lido, porque no final ha um i++. 
            //Isto ocorre apenas no primeiro idioma, pois para que todos falem tal idioma, todos demais idiomas(strings) devem ser necessariamente igual a essa.
            //Caso contrario, o idioma falado devera ser o ingles.
            {
                strcpy(idioma_anterior, idioma);
                //para isso o primeiro idioma e' copiado para idioma_anterior
                i++;
            }

            if(strcmp(idioma_anterior, idioma) != 0)
            {
                mesmo_idioma = 1;
                //se os idiomas forem diferentes mesmo_idioma se torna falsa (diferente de 0)
            }
        }

        if(mesmo_idioma == 0) //se mesmo_idioma permanecer igual a 0 (verdadeira) durante o teste o idioma sera o nativo falado por todas pessoas.
        {
            printf("%s\n",idioma);
        }

        else if(mesmo_idioma == 1) //caso contrario se algum idioma for diferente, o idioma falado sera o ingles.
        {
            printf("ingles\n");
        }

        i = 1; //reinicia i.
        mesmo_idioma = 0; //reinicia mesmo_idioma para o proximo teste.

        
    }

    return 0;
    
}