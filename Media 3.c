#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double N1,N2,N3,N4,media1,exame,media2;

    printf("INSIRA O VALOR DAS 4 NOTAS:\n\n");
    scanf("%lf%lf%lf%lf",&N1,&N2,&N3,&N4);
    media1 = ((2*N1)+(3*N2)+(4*N3)+N4)/10;
    printf("Media: %.1lf\n",media1);

    if(media1>=7){
        printf("Aluno aprovado.\n");
    }
    else{
        if(5>media1){
            printf("Aluno reprovado.\n");
        }
        else{
                printf("Aluno em exame.\n\n");
                printf("DIGITE O VALOR DA NOTA DO EXAME:\n\n");
                scanf("%lf",&exame);
                printf("Nota do exame: %.1lf\n",exame);
                media2 = (media1 + exame)/2;

                if(media2>=5){
                    printf("Aluno aprovado.\n");
                    printf("Media final: %.1lf\n",media2);
                }
                else{
                    printf("Aluno reprovado.\n");
                    printf("Media final: %.1lf\n",media2);
                }
            }
        }
    }

