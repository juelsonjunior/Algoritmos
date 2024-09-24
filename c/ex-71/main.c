#include <stdio.h>
int main(){
    int numero[7] = {999, 999, 999, 999, 999, 999, 999, 999, 0, 1, 2, 3, 4, 5, 6, 7 };
    int tamanhoVetor = sizeof(numero) / sizeof(numero[0]);

    for (int i = 0; i < tamanhoVetor; i++)
    {
        printf("%d ",numero[i]);
    }
    
    return 0;
}