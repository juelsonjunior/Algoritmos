#include <stdio.h>
#include <string.h>

void gerador(char mensagem[80]){
    printf("-----=====-----+ %s +-----=====-----",mensagem);
}

int main(){

    gerador("Aprendendo portugol");

    return 0;
}