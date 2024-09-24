#include <stdio.h>
#include <string.h>

void parImpar(int num){
    
    if(num %2 == 0){
        printf("Numero Par");
    }else{
        printf("Numero Impar");
    }
}
int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    parImpar(numero);
    return 0;
}