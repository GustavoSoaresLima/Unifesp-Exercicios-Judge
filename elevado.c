#include <stdio.h>

int main() {
  long int numero, soma = 1, elevado;

  scanf("%ld", &numero);

  if(numero < 0 || numero > 15){
    printf("NaN");
  }
  else{
    for(int i = 2; i <= numero; i++){
      
      elevado = 1;
      
      for(int j = 0; j < i; j++){
        elevado *= i;
      }

      soma += elevado;
    }

    printf("%ld", soma);
  }

  return 0;
}