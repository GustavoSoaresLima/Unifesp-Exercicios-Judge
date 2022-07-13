#include <stdio.h>

int main(){

  int inicioIntervalo, fimIntervalo, soma;

  scanf("%d", &inicioIntervalo);
  scanf("%d", &fimIntervalo);

  for(int i = inicioIntervalo; i <= fimIntervalo; i++){
    soma = 0;
    for(int j = 1; j <= (i/2); j++){
      if(i%j == 0){
        soma += j;
      }
    }
    if(soma == i){
      printf("%d ", i);
    }
  }

  
  return 0;
}