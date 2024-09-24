#include <stdio.h>
int main(){

    int anoNasc, idade;

    printf("Qual e o teu ano de nascimento: ");
    scanf("%d",&anoNasc);

    idade = 2024 - anoNasc;

    if(idade >= 18){
        printf("Voce tem %d e pode votar",idade);
    }else{
        printf("Voce tem %d e nao pode votar",idade);
    }
    return 0;
}