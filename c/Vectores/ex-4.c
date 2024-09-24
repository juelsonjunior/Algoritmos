#include<stdio.h>

int main(){
    int vetor[10] = {1, 3, 5, 7, 8, 9, 10, 11, 12, 13};
    int n;
    
    for(int i = 0; i < 10; i++){ printf("[%d] = %d\n", i, vetor[i]); }

    printf("Escolhe um numero no vetor: ");
    scanf("%d", &n);

    int divisores = 0;
    printf("\nOs numeros divisiveis por %d sao: ",n);
    for(int i = 0; i < 10; i++){
        if(vetor[i] % n == 0){
            printf("%d, ", vetor[i]);
        }
    }
    return 0;
}