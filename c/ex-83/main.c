#include <stdio.h>
#include <stdlib.h>
int main(){
    int numero[20];

    srand(time(NULL));

    printf("=====Vetor gerado pelo Rand=====\n");
    for (int i = 0; i < 20; i++)
    {
        numero[i] = rand() % 100;

        printf("%d - ", numero[i]);
    }    
    return 0;
}