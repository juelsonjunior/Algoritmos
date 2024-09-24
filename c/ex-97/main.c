#include <stdio.h>
#include <string.h>

int maiorNum(int num1, int num2, int num3){

    int maiorValor = num1;

    if(num2 > maiorValor){
        maiorValor = num2;
    }

    if(num3 > maiorValor){
        maiorValor = num3;
    }

    return maiorValor;
}

int main(){
    int num1, num2, num3;

    printf("Digite numero1: ");
    scanf("%d",&num1);

    printf("Digite numero2: ");
    scanf("%d",&num2);

    printf("Digite numero3: ");
    scanf("%d",&num3);

    int maior = maiorNum(num1, num2, num3);

    printf("O maior valor entre %d e %d e %d",num1, num2, maior);
    
    return 0;
}