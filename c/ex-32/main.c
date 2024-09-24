#include <stdio.h>
#include <stdlib.h>
int main(){
    int numSort, userSort;

    srand(time(NULL));

    printf("Tente adivinhar o numero a ser sorteado: ");
    scanf("%d", &userSort);


    numSort = rand() % 2;


    printf("Numero sorteado: %d\n", numSort);
    printf("Numero digitado pelo o usuario: %d\n", userSort);

    if(userSort < numSort){
        printf("Errado!!!(-_-)");
    }else if(userSort > numSort){
        printf("Passou!!!(x_x)");
    }else{
        printf("Acertou!!!!(+_+)");
    }
    return 0;
}