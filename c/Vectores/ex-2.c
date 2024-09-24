#include<stdio.h>

int main(){
    int vetor[2];

    for(int i = 0; i < 2; i++){
        printf("Digite valor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    int soma = 0;
    for(int i = 0; i < 2; i++){
        soma += vetor[i];
    }

    printf("A soma de todos os valores do vetor é: %d", soma);

    return 0;
}