#include <stdio.h>
#include <string.h>

void gerador(char mensagem[80], int repetir){
    int i;
    for(int i = 0; i <= repetir;i++){
        printf("\n-----=====-----+ %s +-----=====-----",mensagem);
    }
}

int main(){

    
    gerador("Aprendendo portugol", 3);

    return 0;
}