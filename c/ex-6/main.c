#include <stdio.h>
int main(){
    int sucessor,antecessor,numero;

    printf("Digite um numero: ");
    scanf("%d",&numero);

    sucessor = numero + 1;
    antecessor = numero - 1;

    printf("O sucessor eh: %d e o antecessor eh: %d",sucessor,antecessor);
    return 0;
}