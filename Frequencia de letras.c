#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char frase[200];
    char a[]="abcdefghijklmnopqrstuvwxyz", A[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ"; //"a" � o alfabeto min�sculo e "A" o mai�sculo
    int num_testes, cont_letras[26];
    int j, k, maior_rep;

    scanf("%i ",&num_testes);

    while(num_testes--){

        gets(frase);
        //l� a frase

        for(j=0; j<26; j++){ //zera todas entradas do contador de letras (cont_letras[26])
            cont_letras[j] = 0;
        }

        for(j=0; j<strlen(frase); j++){ //passa por todo string
            for(k=0; k<26; k++){ //passa por todas letras do alfabeto (maiusculas e minusculas)
                if(a[k] == frase[j]  ||  A[k] == frase[j]){
                    cont_letras[k]++;
                    break;
                    //se a letra do string for igual a letra na posi��o "k" do alfabeto o contador conta +1 repeti��o para essa letra
                    // exemplo: k=0 (letra a ou A) / frase[j]=a / contador soma +1 a posi��o cont_letras[0], ou seja, +1 a letra "a"
                }
            }
        }
        maior_rep = cont_letras[0];
        for(k=1; k<26; k++){
            if(cont_letras[k] > maior_rep){
                maior_rep = cont_letras[k];
            }
        //passa por todos numeros de repeti��o das 26 letras de cont_letras[26]
        //se a letra mais repetida � maior que "maior_rep" o valor (cont_letras[k] � salvo como "maior_rep"
        }

        for(k=0; k<26; k++){
            if(cont_letras[k] == maior_rep){
               printf("%c",a[k]);
            }
        //passa por todos numeros de repeti��o das 26 letras de cont_letras[26]
        //como algumas letras podem ter repetido na mesma frequencia, todas letras repetidas na mesma frequencia que "maior_rep" s�o exibidas
        }

        printf("\n"); //espa�o para a pr�xima frase
    }
}
