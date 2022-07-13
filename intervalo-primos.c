#include <stdio.h>

int main(){

  int inicio, final, i, primo;

  scanf("%d", &inicio);
  scanf("%d", &final);

  for(inicio; inicio <= final; inicio++){
    primo = 1;
    for(i = 2; i <= (inicio/2); i++){
      if(inicio%i == 0){
        primo = 0;
        i = inicio;
      }
    }
    if(primo == 1 && inicio != 1){
      printf("%d ", inicio);
    }
  }

  printf("\n");

  return 0;
}