#include <stdio.h>

int main() {

  char nome[50];
  char sexo;
  float valorCompra, valorDesconto, valorFinal;

  printf("Digite do cliente: ");
  scanf("%s", nome);

  printf("Digite o sexo do cliente (M/F): ");
  scanf(" %c", &sexo);

  printf("Digite o valor da compra: ");
  scanf("%f", &valorCompra);

  if (sexo == 'M' || sexo == 'm') {
    valorDesconto = valorCompra * 0.05;
  } else if (sexo == 'F' || sexo == 'f') {
    valorDesconto = valorCompra * 0.13;
  } else {
    printf("Sexo inválido. sem desconto(-_-)\n");
    return 1; 
  }

  valorFinal = valorCompra - valorDesconto;

  printf("\nNome: %s\n", nome);
  printf("Sexo: %c\n", sexo);
  printf("Valor da compra: %.2fKz\n", valorCompra);
  printf("Desconto: %.2fKz\n", valorDesconto);
  printf("Valor final: %.2fKz\n", valorFinal);

  return 0;
}