#include<stdio.h>

int fibonaci(int n){
    if(n == 0 || n == 1){
        return n;
    }else{
        return fibonaci(n - 1) + fibonaci(n - 2);
    }
}
int main(){
    int numero;

    printf("quantos termos quer contar: ");
    scanf("%d", &numero);

    for(int i = 0;i < numero; i++){
        printf("%d - ", fibonaci(i));
    }

    return 0;
}