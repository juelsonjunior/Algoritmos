#include<stdio.h>

int eh_primo(int n){

    if(n <= 1){
        return 0;
    }
    
    for(int i = 2; i <= n / 2; i++){

        if(n % i == 0){
            return 0;
        }
    }
    
    return 1;
}

int main(){
    int vetor[5];

    for(int i = 0; i < 5; i++){
        printf("Digite valor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i< 5; i++){

        if(eh_primo(vetor[i])){
        printf("%d - e um numero primo \n", vetor[i]);
        }else{
            printf("%d - nao eh numero primo \n", vetor[i]);
        }

    }

    return 0;
}