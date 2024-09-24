#include <stdio.h>

int main() {
  float lado1, lado2, lado3;

  printf("Digite o comprimento do lado 1: ");
  scanf("%f", &lado1);

  printf("Digite o comprimento do lado 2: ");
  scanf("%f", &lado2);

  printf("Digite o comprimento do lado 3: ");
  scanf("%f", &lado3);

  if (lado1 < lado2 + lado3 && lado2 < lado1 + lado3 && lado3 < lado1 + lado2) {
    printf("Os segmentos formam um triangulo\n");
  } else {
    printf("Os segmentos nao formam um triangulo");
  }

  return 0;
}