#include <stdio.h>
#include <string.h>
int main(){
    float diasAluguer, kmPercoridos, precoKm, precoDia, precoAluguer;
    char tipoCarro;

    printf("Qual tipo de carro quer Alugar popuplar(p) ou luxo(l): ");
    scanf("%c", &tipoCarro);

    printf("Quantos dias de aluguer: ");
    scanf("%f", &diasAluguer);

    printf("Quantos Km foram percorridos: ");
    scanf("%f", &kmPercoridos);

    switch (tipoCarro)
    {
    case 'p':
        precoDia = diasAluguer * 0.90;
       
        if(kmPercoridos <= 100){
             precoKm = kmPercoridos * 0.20;
             precoAluguer = precoDia + precoKm;
        }else if(kmPercoridos > 100){
            precoKm = kmPercoridos * 0.10;
            precoAluguer = precoDia + precoKm;
        }
        break;
    case 'l':
        precoDia = diasAluguer * 150;

        if(kmPercoridos <= 200){
             precoKm = kmPercoridos * 0.30;
             precoAluguer = precoDia + precoKm;
             

        }else if(kmPercoridos > 200){
            precoKm = kmPercoridos * 0.25;
            precoAluguer = precoDia + precoKm;
        }
        break;
    default:
        break;
    }

    if(tipoCarro == 'p'){
        printf("O Preco do aluguer do carro popular ficou %.2f Kz",precoAluguer);
    }else{
        printf("O Preco do aluguer do carro luxo ficou %.2f Kz",precoAluguer);
    }
    return 0;
}