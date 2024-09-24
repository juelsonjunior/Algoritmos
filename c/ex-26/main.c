#include <stdio.h>

int main() {
  
  int num1, num2;
  char repetir = "N";

  do{
  printf("Digite numero 1: ");
  scanf("%d", &num1);

  printf("Digite numero 2: ");
  scanf("%d", &num2);

  if(num1 > num2){
    printf("O n1: %d e maior que n2: %d\n", num1, num2);

  }else if(num1 < num2){
    printf("O n1: %d e menor que n2: %d\n", num1, num2);

  }else if(num2 > num1){
    printf("O n1: %d e maior que n2: %d\n", num2, num1);

  }else if(num2 < num1){
    printf("O n1: %d e menor que n2: %d\n", num1, num2);

  }else{
    printf("O n1: %d e igual ao n2: %d\n", num1, num2);
  }
  }while(repetir ="N");
  return 0;
}