#include <stdio.h>
int main(){
    int diasTrabalhados, salarioTotal, horasTrabalhadas;

    printf("Dias tralhados: ");
    scanf("%d",&diasTrabalhados);

    horasTrabalhadas = diasTrabalhados * 8;

    salarioTotal = horasTrabalhadas * 25;

    printf("Salario do funcionario eh: %d",salarioTotal);
    return 0;
}