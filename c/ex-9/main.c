#include <stdio.h>
#include <string.h>
int main(){
    float reais, dolares;

    printf("Digite quanto dinheiro voce tem em reais: R$");
    scanf("%f", &reais);

    dolares = reais / 3.45;

    printf("Voce pode comprar US$%.2f com R$%.2f\n", dolares, reais);
    
    return 0;
}