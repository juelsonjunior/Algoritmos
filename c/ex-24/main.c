#include <stdio.h>
#include <string.h>
int main(){
    float distancia,precoKm;

    printf("Digite a distancia da viagem em Km:");
    scanf("%f", &distancia);

    if(distancia <= 200){
        precoKm = distancia * 0.50;
    }else{
        precoKm = distancia * 0.45;
    }

    
    printf("O preco da passagem e de %.2fKz", precoKm);
    return 0;
}