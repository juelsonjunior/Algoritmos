#include<stdio.h>

int main(){
    int vetor[10] = {1, 2, 4, 5};
    int n;
    
    printf("Vetor original -> ");
    for(int i = 0; i < 5; i++){ 
        printf("[%d] = %d | ", i, vetor[i]); 
    }
    printf("\n\nVetor invertido -> ");
    for(int i = 5 - 1; i >= 0; i--){
        printf("[%d] = %d | ", i, vetor[i]); 
    }
    
    return 0;
}