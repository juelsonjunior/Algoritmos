#include <stdio.h>
#include <string.h>
int main(){

    float nota1, nota2, media;
    char nome[80];

    printf("Digite o seu nome: ");
    scanf("%s",nome);
    printf("Digite a nota 1: ");
    scanf("%f",&nota1);
    printf("Digite a nota 2: ");
    scanf("%f",&nota2);


    media = nota1 + nota2 / 2;

    if(media >= 7.0){
        printf("O aluno %s teve um bom aproveitamento com uma nota de %.1f",nome,media);
    }else{
        printf("O aluno %s nao teve um bom aproveitamento com uma nota de %.1f",nome,media);
    }
    return 0;
}