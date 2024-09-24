#include <stdio.h>
#include <string.h>

float mediaAluno(float nota1, float nota2){
    return (nota1 + nota2) / 2;
}
int main(){
    float nota1, nota2;

    printf("Digite nota1: ");
    scanf("%f",&nota1);

    printf("Digite nota2: ");
    scanf("%f",&nota2);

    float media = mediaAluno(nota1, nota2);

    printf("A soma dos valores eh: %.2f",media);
    return 0;
}