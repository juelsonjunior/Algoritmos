#include <stdio.h>
#include <string.h>
int main(){
    float distanciaEmMetros,distanciaEmKm,distanciaEmHm,distanciaEmDam,distanciaEmDm,distanciaEmCm,distanciaEmMm;

    printf("Digite a distancia em metros: ");
    scanf("%f",&distanciaEmMetros);

    distanciaEmKm = distanciaEmMetros / 1000;
    distanciaEmHm = distanciaEmMetros / 100;
    distanciaEmDam = distanciaEmMetros / 10;
    distanciaEmDm = distanciaEmMetros * 10;
    distanciaEmCm = distanciaEmMetros * 100;
    distanciaEmMm = distanciaEmMetros * 1000;

    printf("Kilometros: %.5f km\n",distanciaEmKm);
    printf("Hectometro: %.4f hm\n",distanciaEmHm);
    printf("Decametro: %.3f dam\n",distanciaEmDam);
    printf("Decimetro: %.1f dm\n",distanciaEmDm);
    printf("Centimetro: %.1f cm\n",distanciaEmCm);
    printf("Milimetro: %.1f mm\n",distanciaEmMm);
    return 0;
}