#include<stdio.h>

int main(){
    int vetor[8];

    for(int i = 0; i < 8; i++){
        printf("Digite o valor na posicao[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    int indiceMaior = 0;
    for (int i = 0; i < 8; i++){
        if(vetor[indiceMaior] < vetor[i]){
            indiceMaior = i;
        }
    }
    printf("O maior valor do vetor e %d e ele se encontra no indice %d do vetor", vetor[indiceMaior], indiceMaior);

    return 0;
}