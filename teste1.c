#include <stdio.h>
#include <string.h>
int main() {
    char alfabeto[27] = "abcdefghijklmnopqrstuvwxyz";
    char palavra[256];
    int frequencia[26];
    int n, i, j, maior;
    scanf("%d ", &n);
    while (n--) {
        scanf ("%[^\n]%*c", palavra);
        for (i = 0; i < 26; i++)
            frequencia[i] = 0;
        for (i = 0; i < strlen(palavra); i++) {
            for (j = 0; j < 26; j++) {
                if (palavra[i] == alfabeto[j] || palavra[i]+32 == alfabeto[j]) {
                    frequencia[j]++;
                    break;
                }
            }
        }
        maior = frequencia[0];
        for (i = 1; i < 26; i++)
            if (frequencia[i] > maior)
                maior = frequencia[i];
        for (i = 0; i < 26; i++)
            if (frequencia[i] == maior)
                printf("%c", alfabeto[i]);
        printf("\n");
    }
    return 0;
}
