#include <stdio.h>
#include <string.h>

int mediaAluno(float nt1, float nt2){
    float media = (nt1 + nt2) / 2;

    return media;
}

char* situacao(float media){

    char* situacao;
    if(media >= 7.0){
        situacao = "Aprovado";
    }else if(media >= 5.0){
        situacao = "Recuperacao";
    }else{
        situacao = "Reprovado";
    }

    return situacao;
}
int main(){

    float nota1, nota2;

    printf("Digite nota 1: ");
    scanf("%f", &nota1);

    printf("Digite nota 2: ");
    scanf("%f", &nota2);

    float mediaFinal = mediaAluno(nota1, nota2);

    char* situacaoAluno = situacao(mediaFinal);   

    printf("A media final do aluno e: %.2f\n", mediaFinal); 
    printf("A situacao do aluno e: %s", situacaoAluno); 
    return 0;
}