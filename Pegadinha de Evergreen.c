#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num_testes, i, j, tamanho;
    char nome[101], sobrenome[101], nome_completo[202];

    scanf("%i",&num_testes); //le o numero de testes
    getchar();

    while (num_testes--) //executa o codigo ate o numero de testes zerar
    {
        gets(nome); //le primeira linha do nome misturado
        gets(sobrenome); //le segunda linha do nome misturado

        tamanho = strlen(nome);

        // atribui as caracteres corretas ao nome_completo de acordo com a sequencia:
        // "duas letras do nome, seguidas por duas letras do sobrenome, seguidas por duas letras do nome e por duas letras do sobrenome e assim por diante."
        // quando j>=tamanho todos caracteres de nome e sobrenome ja serao lidas e, portanto, o programa encerra
        for(i=0, j=0; j<tamanho; i+=4, j+=2)
        {
            nome_completo[i] = nome[j];
            nome_completo[i+1] = nome[j+1];
            
            nome_completo[i+2] = sobrenome[j];
            nome_completo[i+3] = sobrenome[j+1];
        }

        nome_completo[i] = '\0'; //encerra o nome completo

        printf("%s\n",nome_completo);
    }

    return 0;
    
}