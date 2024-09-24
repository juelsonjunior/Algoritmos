#include <stdio.h>
#include <string.h>
int main(){
    char nomeFunc[10];
    int anosTrabalho;
    float salarioFunct, aumento, reajuste;

    printf("Digite o seu nome: ");
    scanf("%s", nomeFunc);

    printf("Digite o seu salario: ");
    scanf("%f", &salarioFunct);

    printf("Digite os anos de trabalho: ");
    scanf("%d", &anosTrabalho);

    printf("Seu salario atual eh: %.2fKz\n",salarioFunct);

    if(anosTrabalho <= 3){
        aumento = salarioFunct * 0.03;
        reajuste = salarioFunct + aumento;

    }else if(anosTrabalho >= 3 && anosTrabalho <= 10){
        aumento = salarioFunct * 12.5;
        reajuste = salarioFunct + aumento;
        
    }else{
        aumento = salarioFunct * 0.20;
        reajuste = salarioFunct + aumento;
    }

    printf("O seu salario reajustado eh: %.2f", reajuste);
    return 0;
}