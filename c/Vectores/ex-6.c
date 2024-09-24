#include<stdio.h>

int main(){
    int vetor[10] = {1, 3, 5, 7, 8, 9, 10, 11, 12, 13};
    
    printf("Vetor original -> ");
    for(int i = 0; i < 10; i++){ 
        printf("[%d] = %d | ", i, vetor[i]); 
    }

    int multiplicacao = 1;
    int soma = 0;
    for(int i = 0; i < 10; i++){
        if(vetor[i] % 2 == 0){
            multiplicacao *= vetor[i];
        }else{
            soma += vetor[i];
        }

    }

    printf("\nMultiplicacao dos elementos pares: %d\n", multiplicacao);
    printf("\nSoma dos elementos impares: %d", soma);
    return 0;
}