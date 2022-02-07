#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char cpf[15];
    int casos = 10000;
    int cpf_num[12];

    while(gets(cpf) && casos--)
    {
        int i, j, soma_b1=0, soma_b2=0, b1, b2;

        /*
            Por meio do "for", passamos todos valores da string(cpf) para o array(cpf_num).
            Por meio do "if", as posicoes 3,7,11 nao sao copiadas para o array, pois sao equivalentes aos caracteres "." e "-".
            Ao realizar a copia precisamos adequar os caracteres (char) para valores inteiros (int) por meio da tabela ASCII.
            Como o valor "0" ocupa a posicao 48 da tabela ASCII, diminui-se 48 para que cada carcacter equivala ao numero da sua posicao. 
            ex: 0 virará "nul", que ocupa a posicao 0 da tebela ASCII
        */
        for(i=0, j=0; i<15; i++)
        {
           if(i!=3 && i!=7 && i!=11)
           {
               cpf_num[j] = (int) cpf[i] - 48;
               j++;
           }
        }
        /*
            Para descobrirmos o dígito b1, procedemos da seguinte maneira: multiplicamos o primeiro por 1, o segundo por 2, o terceiro por 3, o quarto por 4 e vamos assim até multiplicarmos o nono por 9. 
            Então, somamos tudo isto. 
            Após termos somado tudo, dividimos por 11. 
            O dígito b1 será o resto da divisão (ou 0, caso o resto seja 10).
        */
     
        for(i=0, j=1; i<=8; i++, j++)
        {
            soma_b1 += ((j)*(cpf_num[i]));
        }
        b1 = soma_b1%11;
        if(b1 == 10) b1=0;

        /*
            Para o segundo dígito verificador, temos o seguinte: multiplicamos o primeiro por 9, o segundo por 8, o terceiro por 7, o quarto por 6 e vamos assim até multiplicarmos o nono por 1. 
            Então, somamos tudo isto e dividimos por 11. 
            O dígito b2 será o resto da divisão (ou 0, caso o resto seja 10).
        */
        for(i=0, j=9; i<=8; i++, j--)
        {
            soma_b2 += ((j)*(cpf_num[i]));
        }
        b2 = soma_b2%11;
        if(b2 == 10) b2=0;

        //verificamos se os digitos finais sao iguais aos restos das somas
        if(b1==cpf_num[9] && b2==cpf_num[10])
        {
            printf("CPF valido\n");
        }
        else
        {
            printf("CPF invalido\n");
        }
    }

    return 0;
}