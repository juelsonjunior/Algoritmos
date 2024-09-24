#include <stdio.h>
int main(){
    float kmRodados, diasAlugados, precoTotal,PrecoDiario, precoKm;

    printf("Quantidade de Km percorridos: ");
    scanf("%f",&kmRodados);

    printf("Quantidade de dias alugado: ");
    scanf("%f",&diasAlugados);

    PrecoDiario = diasAlugados * 90;

    precoKm = kmRodados * 0.20;

    precoTotal = PrecoDiario + precoKm;
    

    printf("O total a pagar eh: %.2f",precoTotal);
    return 0;
}