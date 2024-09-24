#include <stdio.h>
#include <string.h>

void somador(int num1, int num2){
    int soma = num1 + num2;

    printf("A soma dos valores eh: %d",soma);
}
int main(){
    int numero1, numero2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &numero1);

    printf("Digite o segundo valor: ");
    scanf("%d", &numero2);

    somador(numero1, numero2);
    return 0;
}