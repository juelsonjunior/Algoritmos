#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char nome[80];
    printf("Qual e o seu nome: ");
    scanf("%s",nome);
    
    printf("Ola %s, e um prazer te conhecer! \n",nome);
    return 0;
}


