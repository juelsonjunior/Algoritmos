#include<stdio.h>
#define tamanhoVetor 10

int inverte_vetor(int vetor[]){

    for(int i = tamanhoVetor - 1; i >= 0 ;i--){
        printf("{%d} ",vetor[i]);
    }
}

int main(){
    int vetor[tamanhoVetor] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    inverte_vetor(vetor);
    
    return 0;
}