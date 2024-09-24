#include<stdio.h>

typedef struct{
    int hora;
    int minutos;
    int segundos;
}Tempo;

void calcSeg(int hora, int minuto){
    int segundos;
    segundos = (hora * 3600) + (minuto * 60) + minuto;

    printf("Hora e minuto convertidos em segundos: %d", segundos);
}

int main(){
    Tempo tempo;

    printf("Horas: ");
    scanf("%d",&tempo.hora);

    printf("Minutos: ");
    scanf("%d", &tempo.minutos);

    printf("Segundos: ");
    scanf("%d", &tempo.segundos);


    printf("\nHoras: %d : Minuto: %d : Segundos %d \n",tempo.hora, tempo.minutos, tempo.segundos);

    calcSeg(tempo.hora, tempo.minutos);
    return 0;
}