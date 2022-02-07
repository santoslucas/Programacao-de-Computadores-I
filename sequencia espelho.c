#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_testes;
    scanf("%i",&num_testes);

    while(num_testes--)
    {
        int inicio, fim, i, tmp;
        scanf("%i %i", &inicio, &fim);
        
        //imprime a sequencia
        for(i=inicio; i<=fim; i++)
        {
            printf("%i",i);
        }

        /*
            Imprime a sequencia de forma invertida.
            No segundo "for" o numero em questao (tmp) sera dividido por 10 a cada repeticao desse "for".
            Dessa forma, como se trata de um "int", quando tmp se tornar <10 seu resto na divisao por 10 sera 0.
            Apos isso, imprimira o resto de "tmp" por 10 no segundo print.
            ex: 100: 100%10=10 -> tmp=10 -> 10%10=1 -> tmp=1 -> (como tmp%10 e' igual 0, por ser um "int", o "for" para) -> tmp%10 e' impresso

            Caso "tmp">10 ele nao entra no segundo "for", por ser um "int" e e' impresso no segundo printf
        */
        for(i=fim; i>=inicio; i--)
        {
            for(tmp=i; tmp/10!=0; tmp/=10)
            {
                printf("%i", tmp%10);
            }
            printf("%i",tmp%10);
        }

        printf("\n");
    }

    return 0;
}