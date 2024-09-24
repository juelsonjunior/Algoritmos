#include <stdio.h>
int main(){
    float salarioFunc, novoSalario, aumento;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salarioFunc);

    aumento = salarioFunc * 0.15;
    novoSalario = salarioFunc + aumento;

    printf("Seu novo salario eh: %.2f",novoSalario);
    return 0;
}