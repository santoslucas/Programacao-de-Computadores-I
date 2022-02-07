#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, j, tamanho, cont=0;
    char contrato[10001], contrato_novo[10001], contrato_final[10001];

    //le o contrato(numero, valor)
    while(gets(contrato))
    {
        //se o contrato lido for "0 0" o codigo para
        //"O ultimo caso de teste é seguido por uma linha que contém apenas dois zeros separados por espaços em branco."
        if(strcmp(contrato, "0 0") == 0)
        {
            return 0;
        }

        tamanho = strlen(contrato);

        /*como em todos os casos a sempre um numero "x" seguido de um espaço ("x "),
          o "for" começa sempre na terceira posição de "contrato" (i=2),
          que corresponde ao inicio real do valor do contrato, visto que o valor "x" citado acima e' o numero que apresenta a falha.
          Dessa forma, sempre que os digitos dos valores do contrato forem diferentes de "x"
          serão salvos no "contrato_novo"
        */
        for(i=2, j=0; i<tamanho; i++)
        {
            if(contrato[i] != contrato[0])
            {
                contrato_novo[j] = contrato[i];
                j++;
            }
        }

        contrato_novo[j] = '\0'; //finaliza o contrato_novo

        tamanho = strlen(contrato_novo);

        /*
        O primeiro "for" verifica todos valores de contrato até que o digito do contrato_novo difira de 0.
        Dessa forma, o contador conta quantos '0' iniciais contrato_novo tem.
        Nesse sentido o valor de contador sera a posição de contrato_novo onde os digitos não são "zeros a esquerda".
        Portanto, esse novo valor sem os "zeros a esquerda" e' gravado em contador_final
        */
        for(i=0; contrato_novo[i] == '0' ; i++)
        {
            cont++;
        }

        for(i=cont, j=0; i<tamanho; i++, j++)
        {
            contrato_final[j] = contrato_novo[i];
        }

        contrato_final[j] = '\0'; //finaliza o contrato_final

        tamanho = strlen(contrato_final);

        /* O "for" passa por todos digitos de "contrato_final" e se todos forem iguais a '0',
           o "cont" tera valor igual ao do "tamanho".
           Dessa forma, se "cont" for igual ao tamanho o valor impresso sera '0'.

           " o número 5000 corresponde ao valor numérico 0, e não 000 (como ele de fato aparece impresso)."
          
           Caso contrario, o valor impresso sera "contrato_final"
        */
        for(cont=0, i=0; i<tamanho; i++)
        {
            if(contrato_final[i] == '0')
            {
                cont++;
            }
        }

        if(cont == tamanho)
        {
            printf("0\n");
        }
        else
        {
            printf("%s\n", contrato_final);
        }
        cont = 0; //reinicia o contador
    }
}