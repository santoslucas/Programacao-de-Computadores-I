#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct nome
{
    char string[31]; //a string[31] representa uma linha com um nome de até 30 caracteres
};

int main()
{
    struct nome v[10];
    int i;

    for(i=0; i<10; i++)
    {
        gets(v[i].string);
    }
    
    /* "Imprima o terceiro nome da lista;
       Imprima o sétimo nome da lista;
       Imprima o nono nome da lista."
    */
    printf("%s\n", v[2].string);
    printf("%s\n", v[6].string);
    printf("%s\n", v[8].string);

    return 0;
}