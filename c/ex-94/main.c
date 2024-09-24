#include <stdio.h>
#include <string.h>

void fibonaci(int seq){

    int anterior = 0;
    int atual = 1;
    int proximo;

    

    for(int i = 1; i < seq ;i++){
        if(i < 2 ){
            proximo = i;
        }else{
            proximo = anterior + atual;
            anterior = atual;
            atual = proximo;
        }
        printf(" %d >>",proximo);
    }
}
int main(){
    int sequencia;

    printf("Digite o numero de sequencia: ");
    scanf("%d", &sequencia);

    fibonaci(sequencia);
    return 0;
}