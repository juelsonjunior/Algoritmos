#include <stdio.h>
#include <string.h>
int main(){
    float precoProduto, precoPromocional, desconto;
    char repetir;

    do{
    printf("Digite o preco do produto: ");
    scanf("%f", &precoProduto);

    desconto = precoProduto * 0.20;
    precoPromocional = precoProduto - desconto;

    printf("O preco promocional do produto eh: %.2f\n", precoPromocional);

    printf("Deseja repetir:(S/N) ");
    scanf(" %c", &repetir);

    }while(repetir == 's' || repetir == 'S');
    return 0;
}