#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char frase[200];
    char a[]="abcdefghijklmnopqrstuvwxyz", A[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ"; //"a" é o alfabeto minúsculo e "A" o maiúsculo
    int num_testes, cont_letras[26];
    int j, k, maior_rep;

    scanf("%i ",&num_testes);

    while(num_testes--){

        gets(frase);
        //lê a frase

        for(j=0; j<26; j++){ //zera todas entradas do contador de letras (cont_letras[26])
            cont_letras[j] = 0;
        }

        for(j=0; j<strlen(frase); j++){ //passa por todo string
            for(k=0; k<26; k++){ //passa por todas letras do alfabeto (maiusculas e minusculas)
                if(a[k] == frase[j]  ||  A[k] == frase[j]){
                    cont_letras[k]++;
                    break;
                    //se a letra do string for igual a letra na posição "k" do alfabeto o contador conta +1 repetição para essa letra
                    // exemplo: k=0 (letra a ou A) / frase[j]=a / contador soma +1 a posição cont_letras[0], ou seja, +1 a letra "a"
                }
            }
        }
        maior_rep = cont_letras[0];
        for(k=1; k<26; k++){
            if(cont_letras[k] > maior_rep){
                maior_rep = cont_letras[k];
            }
        //passa por todos numeros de repetição das 26 letras de cont_letras[26]
        //se a letra mais repetida é maior que "maior_rep" o valor (cont_letras[k] é salvo como "maior_rep"
        }

        for(k=0; k<26; k++){
            if(cont_letras[k] == maior_rep){
               printf("%c",a[k]);
            }
        //passa por todos numeros de repetição das 26 letras de cont_letras[26]
        //como algumas letras podem ter repetido na mesma frequencia, todas letras repetidas na mesma frequencia que "maior_rep" são exibidas
        }

        printf("\n"); //espaço para a próxima frase
    }
}
