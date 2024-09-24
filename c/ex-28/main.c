#include <stdio.h>
#include <string.h>
int main(){
    int largura, comprimento, area;
    char clasificacao;

    printf("Digite a largunra: ");
    scanf("%d", &largura);

    printf("Digite a comprimento: ");
    scanf("%d", &comprimento);

    area = largura * comprimento;

    printf("A area do terra em m/2 eh: %d\n", area);

    if(area < 100){
        clasificacao = 'P';
    }else if(area >= 100 && area <= 500){
        clasificacao = 'M';
    }else{
        clasificacao = 'V';
    }

    switch(clasificacao){
        case 'P':
            printf("TERRENO POPULAR");
            break;
        case 'M':
            printf("TERRENO MASTER");
            break;
        case 'V':
            printf("TERRENO VIP");
            break;
        default:
            printf("TERRENO SEM CLASSIFICACAO(-_-)");
            break;    
    }
    return 0;
}