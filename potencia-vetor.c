#include <stdio.h>

int main() {
  
  int numero[5], potencia, resultado[5];

  for(int i = 0; i < 5; i++){
    do{
      scanf("%d", &numero[i]);
    }while(numero[i] < -10 || numero[i] > 10);
  }

  do{
    scanf("%d", &potencia);
  }while(potencia < 0 || potencia > 10);

  for(int i = 0; i < 5; i++){
    resultado[i] = 1;
    for(int j = 0; j < potencia; j++){
      resultado[i] *= numero[i]; 
    }
    printf("%d ", resultado[i]);
  }

  printf("\n");

  return 0;
}