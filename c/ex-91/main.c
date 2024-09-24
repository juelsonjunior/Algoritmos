#include <stdio.h>
#include <string.h>

void maior(int num1, int num2){
    
    if(num1 > num2){
        printf("O %d e maior que o %d", num1, num2);
    }else if(num2 > num1){
        printf("O %d e menor que o %d", num2, num1);
    }else{
        printf("Os numeros sao iguais");
    }
}
int main(){
    int numero1, numero2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &numero1);

    printf("Digite o segundo valor: ");
    scanf("%d", &numero2);

    maior(numero1, numero2);
    return 0;
}