#include <stdio.h>

int main() {
  
  int tamanho;

  scanf("%d", &tamanho);
  int numeros[tamanho], inverso[tamanho], i;

  if(tamanho < 2 || tamanho > 50){
    printf("Erro");
  } else {
    for(i = 0; i < tamanho; i++){
      scanf("%d", &numeros[i]);
    }
    i = 0;
    for(int j = (tamanho - 1); j >= 0; j--){
      inverso[i] = numeros[j];
      i++;
    }
    for(i = 0; i < tamanho; i++){
      printf("%d ", inverso[i]);
    }
  }

  return 0;
}