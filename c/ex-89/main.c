#include <stdio.h>
#include <string.h>

void gerador(char mensagem[80], int repetir, int borda){
    int i;

    switch (borda)
    {
    case 1:
        for(int i = 0; i <= repetir;i++){
        printf("\n+-------=======------+ %s +-------=======------+",mensagem);
        }
        break;
    case 2:
        for(int i = 0; i <= repetir;i++){
        printf("\n~~~~~~~~:::::::~~~~~~~ %s ~~~~~~~~:::::::~~~~~~~",mensagem);
        }
        break;
    case 3:
        for(int i = 0; i <= repetir;i++){
        printf("\n<<<<<<<<------->>>>>>> %s <<<<<<<<------->>>>>>>",mensagem);
        }
        break;
    default:
        printf("Borda nao encontrada");
        break;
    }

    
}

int main(){


    gerador("Aprendendo portugol", 3, 3);

    return 0;
}