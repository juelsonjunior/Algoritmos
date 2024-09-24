#include <stdio.h>

int main() {
  int anoNasc, restanteTime, idade;
  int anoAtual = 2024;

  printf("Digite o seu ano de nascimento: ");
  scanf("%d", &anoNasc);

    idade = anoAtual - anoNasc;

    if(idade < 18){
        restanteTime = 18 - idade;
        printf("Voce esta com %d e falta %d anos para o alistamento militar",idade, restanteTime);
    }else if(idade == 18){
        printf("Esta na idade certa para se alistar");
    }else{
        restanteTime = idade - 18;
        printf("Voce esta com %d e já se passaram %d anos desde o alistamento militar",idade, restanteTime);
    }

  return 0;
}