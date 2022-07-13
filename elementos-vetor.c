#include <stdio.h>

int main() {
  
  int numero[20], i = 0, maior, menor, total = 0, contador = 0, diferenca;
  float normal[20], media;

  scanf("%d", &numero[i]);
  maior = numero[i];
  menor = numero[i];
  if(numero[i] != 0){
    total += numero[i];
    contador++;
  }

  for(i = 1; i < 20; i++){
    scanf("%d", &numero[i]);
    if(numero[i] > maior){
      maior = numero[i];
    } else if(numero[i] < menor){
      menor = numero[i];
    }
    if(numero[i] != 0){
      total += numero[i];
      contador++;
    }
  }

  media = (float)total / (float)contador;
  diferenca = maior - menor;

  printf("%d %d\n%0.3f\n", maior, menor, media);

  for(i = 0; i < 20; i++){
    normal[i] = (float)(numero[i] - menor) / (float)diferenca;
    printf("%0.3f ", normal[i]);
  }

  printf("\n");

  return 0;
}