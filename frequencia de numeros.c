#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    No primeiro "for", todos numeros sao lidos e salvos como a posição "tmp" de um vetor(numeros)
    Quando a posição "tmp" e' scaneada seu valor é acrescido em 1 (numeros[tmp]++)
*/
int main()
{
    int num_casos;
    scanf("%i", &num_casos);

    int i, tmp;
    int numeros[200]={0};
    
    for(i=0; i<num_casos; i++)
    {
       scanf("%i", &tmp);
       numeros[tmp]++;
    }

    for(i=0; i<2000; i++)
    {
        if(numeros[i]>0)
            printf("%i aparece %i vez(es)\n", i, numeros[i]);
    }

    return 0;
}