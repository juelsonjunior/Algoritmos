#include <stdio.h>
int main(){
    float numero,dobro,tercaParte;
    printf("Digite um numero: ");
    scanf("%f",&numero);

    dobro = numero * 2;
    tercaParte = numero / 3;

    printf("O dobro do numero eh: %.1f e terca parte eh: %.1f",dobro, tercaParte);
    return 0;
}