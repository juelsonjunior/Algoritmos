#include <stdio.h>
#include <string.h>

int somador(int num1, int num2){
    return num1, num2;
}
int main(){
    int num1, num2;

    printf("Digite primeiro numero: ");
    scanf("%d",&num1);

    printf("Digite segundo numero: ");
    scanf("%d",&num2);

    int soma = somador(num1, num2);

    printf("A soma dos valores eh: %d",soma);
    return 0;
}