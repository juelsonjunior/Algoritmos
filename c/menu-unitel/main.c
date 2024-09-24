#include<stdio.h>
#include<string.h>

int main(){
    char codigo[10];
    int resultado;

    printf("Codigo: ");
    scanf("%s", codigo);


    resultado = strcmp(codigo, "*111#");

    if(resultado == 0){
        printf("Codigo certo\n");
    }else{
        printf("Codigo errado\n");
    }

    return 0;
}