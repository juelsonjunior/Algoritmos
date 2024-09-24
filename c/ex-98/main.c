#include <stdio.h>

int superSomador(int in, int f){
    int soma = 0;
    for(int i = in; i <= f; i++){

        soma = soma + i;

    }
    return soma;
}
int main(){

    int inicio, fim;

    printf("Digite inicio da contagem: ");
    scanf("%d", &inicio);

    printf("Digite fim da contagem: ");
    scanf("%d", &fim);

    int somador = superSomador(inicio, fim);

    printf("%d ",somador);

    return 0;
}