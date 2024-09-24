#include <stdio.h>
#include <string.h>
int main(){
    float nota1, nota2, media;
    char repetir;
    repetir = 'n';

    do{
        printf("Digite a nota1: ");
        scanf("%f", &nota1);

        printf("Digite a nota2:");
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2;

        

        printf("A media do aluno eh: %.2f\n",media);

        if(media >= 7.0){
            printf("APROVADO\n");

        }else if(media >= 5.0 && media <= 6.9){
            printf("RECUPERACAO\n");

        }else{
            printf("REPROVADO\n");
        }
    }while(repetir == 'n');

    return 0;
}