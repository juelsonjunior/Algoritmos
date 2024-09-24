#include <stdio.h>

int potencia(int b, int e){
    int resultado = 1;
    for (int i = 0; i < e; i++){
        resultado *= b;
    }
    return resultado;
}
int main(){

    int base, exp;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite expoente: ");
    scanf("%d", &exp);

    int pot = potencia(base, exp);

    printf("O expoente de %d ^ %d e %d ",base, exp, pot);

    return 0;
}