#include <stdio.h>

int main(){
    int valor1, valor2, soma;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    soma = valor1 + valor2;

    printf("A soma de %d + %d = %d",valor1, valor2, soma);

    return 0;
}
