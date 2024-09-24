#include<stdio.h>
#define maxAluno 2
#define maxVetor 2
typedef struct{
    char nome[20];
    int idade;
    float notas[maxVetor], media;
}Alunos;

int main(){
    Alunos aluno[maxAluno];

    for(int i = 0; i < maxAluno; i++){
        printf("Digite o nome do aluno %d: ", i+1);
        scanf("%s", aluno[i].nome);

        printf("Digite a idade do aluno %d: ", i+1);
        scanf("%d", &aluno[i].idade);

        for (int j = 0; j < maxVetor; j++)
        {
            printf("Digite a nota[%d] do aluno %d:", j+1, i+1);
            scanf("%f", &aluno[i].notas[j]);
        }
    }
    for(int i = 0; i < maxAluno;i++){
        float soma = 0;
        for(int j = 0; j < maxVetor;j++){
            soma += aluno[i].notas[j];
        }
        aluno[i].media = soma / maxVetor;
    }

    int maiorMedia = 0;
    for(int i = 0; i < maxAluno; i++){
        if(aluno[i].media > aluno[maiorMedia].media){
            maiorMedia = i;
        }
    }

    printf("O aluno com a maior media de notas eh: %s\n", aluno[maiorMedia].nome);
    printf("A maior media eh:%.1f\n", aluno[maiorMedia].media);
    
    return 0;
}