#include <stdio.h>
#include <string.h>
int main(){
    float areaParede, larguraParede , alturaParede, litrosTintas;

    printf("Digite a largura: ");
    scanf("%f",&larguraParede);
    printf("Digite a altura: ");
    scanf("%f",&alturaParede);

    areaParede = larguraParede * alturaParede;

    litrosTintas = areaParede / 2;

    printf("A area da parede %.2f metros quadrados\n", areaParede);
    printf("Quantidade de tinta necessaria: %.2f litros\n", litrosTintas);

    return 0;
}