#include <stdio.h>
int main(){

    int velocidadeCarro, multaPorKm;

    printf("Qual e a velocidade do carro");
    scanf("%d",&velocidadeCarro);

    if(velocidadeCarro > 80){

        multaPorKm = (velocidadeCarro - 80) * 5;

        printf("Voce foi multado! e tens uma multa de %d",multaPorKm);
    }else{
        printf("Esta tudo certo");
    }
    return 0;
}