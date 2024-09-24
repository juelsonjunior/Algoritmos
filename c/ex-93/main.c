#include <stdio.h>
#include <string.h>

void contador(int in, int f, int inc){
    
    for (int i = in; i <= f; i += inc)
    {
        printf("%d \n",i);
    }  
}
int main(){
    int inicio, fim, incremento;

    printf("Digite o inicio: ");
    scanf("%d", &inicio);

    printf("Digite o fim: ");
    scanf("%d", &fim);

    printf("Digite o incremento: ");
    scanf("%d", &incremento);

    contador(inicio, fim, incremento);
    return 0;
}