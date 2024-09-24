#include <stdio.h>
#include <string.h>

int main(){
    float salarioPessoa[100], numFilhos[100];
    float mediaSalario, mediaFilhos;
    int numPessoa = 0;
    char repetir;

    do{
        printf("Digite o salario da pessoa %d :", numPessoa + 1);
        scanf("%f", &salarioPessoa[numPessoa]);
        printf("Digite a quantidade de filhos da pessoa %d :", numPessoa + 1);
        scanf("%f", &numFilhos[numPessoa]);

        numPessoa++;
        printf("Deseja repetir (s/n): \n");
        scanf(" %c",&repetir);

    }while(repetir == 's' || repetir == 'S');

    printf("===============Mostrar dados===============\n");

    //Calculo da media de salario
    float somaMedia = 0;
    for(int i = 0; i < numPessoa;i ++){
        somaMedia += salarioPessoa[i];
    }
    mediaSalario = somaMedia / numPessoa;

    //Calculo da media de filhos
    float somaFilhos = 0;
    for(int i = 0; i < numPessoa; i++){
        somaFilhos += numFilhos[i];
    }
    mediaFilhos = somaFilhos / numPessoa;

    //Calculo da maior de salario
    float maiorSalario = salarioPessoa[0];
    for(int i = 1; i < numPessoa;i++){
        if(salarioPessoa[i] > maiorSalario){
            maiorSalario = salarioPessoa[i];
        }
    }

    //Calculo da percentagem de pessoas com salario até 1500
    float cont = 0; 
    for(int i = 0;i < numPessoa;i++){
        if(salarioPessoa[i] >= 150000){
            cont++;
        }
    }

    float porcentagem = cont / numPessoa * 100;

    printf("Media de salario: %.2f Kz\n", mediaSalario);
    printf("Media do numero de filhos: %.2f\n", mediaFilhos);
    printf("Maior salario: %.2f Kz\n", maiorSalario);
    printf("Porcentagem de pessoas com salarios ate 150.000,00 kz: %.2f%%\n", porcentagem);


}