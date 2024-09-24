#include <stdio.h>
#include <string.h>
int main(){
    int horaAtividade, pontosHoraAtividade, dinheiroPorPonto;

    printf("Quantas horas de atividade fez por mes: ");
    scanf("%d", &horaAtividade);

    if(horaAtividade <= 10){
        pontosHoraAtividade = horaAtividade * 2;

    }else if(horaAtividade > 10 || horaAtividade < 20){
        pontosHoraAtividade = horaAtividade * 5;

    }else if(horaAtividade > 20){
        pontosHoraAtividade = horaAtividade * 10;

    }
    dinheiroPorPonto = pontosHoraAtividade * 5;
    printf("Voce obteve %d pontos e %dkz", horaAtividade, dinheiroPorPonto);
    return 0;
}