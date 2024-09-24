#include <stdio.h>
#include <string.h>
int main(){
    char nomes[7][50];

    printf("====================Valores a serem inseridos====================\n");
    for(int i = 0; i < 7 ;i++){
        printf("Insira o %d nome: ",i + 1);
        scanf("%s", nomes[i]);
    }

    printf("====================Valores inseridos====================\n");
    for(int i = 7; i >= 0; i--){
        printf("Valores: %s\n", nomes[i]);
    }
    
    return 0;
}