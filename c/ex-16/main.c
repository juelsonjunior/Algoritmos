#include <stdio.h>
#include <string.h>
int main(){
    int cigarrosPorDia ,anosFumando, minutosPerdidos,diasPerdidos;

    printf("Quantos cigarros fumas por dia: ");
    scanf("%d", &cigarrosPorDia);

    printf("Quantos anos ja fumou: ");
    scanf("%d", &anosFumando);

    minutosPerdidos = cigarrosPorDia * 10 * 365 * anosFumando;
    diasPerdidos = minutosPerdidos / (24 * 60);

    printf("Voce ja perdeu cerca de %d dias de vida devido ao fumo", diasPerdidos);

    return 0;
}