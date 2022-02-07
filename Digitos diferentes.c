#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    No verificador, o numero e' transformado em uma string pelo "sprintf".
    Por meio de 2 for's, todos os digitos do numero(string) sao comparados.
    Se algum for igual a outro o cont_repeticao se torna diferente de 0.
    Assim, ao chegar no if a funcao retorna 1(true) se nao houver digitos repetidos(cont_repeticao=0) e 
    retorna 0(false) se houver digitos repetidos.
*/
int verificador(int numero)
{
    char string[5]; //tamanho 5, pois o maior numero (5000) que pode ser digitado tem 4 digitos
    int i, j, cont_repeticao=0;

    sprintf((string),"%d", numero);

    for(i=0; i<strlen(string); i++)
    {
        for(j=i+1; j<strlen(string); j++)
        {
            if(string[i] == string[j]) 
                cont_repeticao++;
        }
    }

    if(cont_repeticao == 0) 
        return 1;
    else 
        return 0;
}

/*
    Por meio do "for" todos os numeros entre num1 e num2, inclusive eles, sao verificados com relacao a repeticao de digitos, por meio da funcao "verificador".
    Se o verificador der "true", cont_numeros e' acrescido em 1.
    Ao final do programa, e' imprimido a quantidade de numeros com apenas digitos distintos (cont_numeros).
*/
int main()
{
    int num1, num2;

    while(scanf("%i %i", &num1, &num2) != EOF) //executa testes enquanto as entradas forem numeros inteiros
    {
        int cont_numeros=0;

        for(num1; num1<=num2; num1++)
        {
            if(verificador(num1))
            {
                cont_numeros++;
            }
        }

        printf("%i\n", cont_numeros);
        
    }
    return 0;
}