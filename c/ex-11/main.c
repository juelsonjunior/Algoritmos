#include <stdio.h>
int main(){
    float a, b, c, delta;

    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);

    delta = pow(b, 2) - 4 * a * c;

    printf("O delta dessa equacao do segundo grau eh: %.2f",delta);
    return 0;
}