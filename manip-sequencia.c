#include <stdio.h>

int main(){

  int numero, positivos = 0, mult3e5 = 1, cont7 = 0;
  float mult7 = 0, media7;

  do {
    scanf("%d", &numero);
    if(numero >= 0){
      positivos++;

      if(numero%3 == 0 && numero%5 == 0){
        mult3e5 *= numero;
      }
      if(numero%7 == 0){
        mult7 += (float)numero;
        cont7++;
      }
    }
  }while(numero != -1);

  /*if(mult3e5 == 1){
    mult3e5 = 0;
  }*/
  if(cont7 == 0){
    cont7 = 1;
  }

  media7 = mult7 / (float)cont7;

  printf("%d %f %d", positivos, media7, mult3e5);

  return 0;
}