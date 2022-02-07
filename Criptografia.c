#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num_testes, i, j, tamanho, metade_tamanho;
    char palavra[1001], letra;
    char a[]="abcdefghijklmnopqrstuvwxyz", A[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    scanf("%i", &num_testes);
    getchar();

    while(num_testes--)
    {
        gets(palavra);
        tamanho = strlen(palavra)-1; //-1 para desconsiderar '\0', e não copiar o '\0' para palavra[1] quando a palavra for invertida
        metade_tamanho = strlen(palavra)/2;

        //Na primeira passada, somente caracteres que sejam letras minúsculas e maiúsculas devem ser deslocadas 3 posições para a direita
        for(i=0; i<=tamanho; i++)
        {
            for(j=0; j<26; j++)// passa por todas letras do alfabeto maiusculo(A) e minusculo(a)
            {
                if(palavra[i] == a[j] || palavra[i] == A[j]) //"somente caracteres que sejam letras minúsculas e maiúsculas devem ser deslocadas"
                {
                    palavra[i] = (palavra[i] + 3); //desloca 3 casas para direita na tabela ASCII
                    break;// interrompe o for, pois já constatou que palavra[i] é uma letra maiuscula ou minuscula
                }
            }
        }
        
        //Na segunda passada, a linha deverá ser invertida.
        //Troca a ultima letra da palavra com a primeira, a segunda com a antepenultima e assim sucessivamente.
        //"letra" e' uma variavel temporaria destinada a troca da palavra[i] com seu espelho (palavra[tamanho-i]).
        for(i=0; i<metade_tamanho; i++)
        {
            letra = palavra[i];
            palavra[i] = palavra[tamanho-i];
            palavra[tamanho-i] = letra;
        }
        
        //Na terceira e última passada, todo e qualquer caractere a partir da metade em diante (truncada) devem ser deslocados uma posição para a esquerda na tabela ASCII.
        for(i=metade_tamanho; i<=tamanho; i++)
        {
            palavra[i] = (palavra[i] - 1);//desloca 1 casa para esquerda na tabela ASCII
        }

       printf("%s\n", palavra);
    }

    return 0;
}