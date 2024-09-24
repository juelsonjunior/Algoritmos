#include <stdio.h>
int main(){
    float valorCasa, salComprador, anosPag, prestMensal, calcPrest;

    printf("Digite o valor da casa: ");
    scanf("%f", &valorCasa);

    printf("Digite o salario do comprador: ");
    scanf("%f", &salComprador);

    printf("Em qunatos anos pretende pagar: ");
    scanf("%f", &anosPag);

    calcPrest = anosPag * salComprador;

    printf("Prestacao mensal: %.2f", calcPrest);

    return 0;
}