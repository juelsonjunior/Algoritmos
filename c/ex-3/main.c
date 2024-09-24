#include <stdio.h>
#include <string.h>

int main(){
    float salario;
    char nome[80];


    printf("Qual e o seu nome: ");
    scanf("%s",nome);

    printf("Qual e o seu salario: ");
    scanf("%f",&salario);

    printf("O funcionario(a): %s, tem um salario de: Kz%.2f, no mes de junho", nome, salario);

    return 0;
}